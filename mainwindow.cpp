#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    lastPath = "";

    ui->searchButton->setEnabled(false);
    ui->typeOfRegExBox->addItem("Not used");
    ui->searchStatusLabel->setVisible(false);

    ui->listOfFounds->setContextMenuPolicy(Qt::CustomContextMenu);

    ui->searchButton->setIcon(QIcon(":/myFiles/Magnifier.png"));
    ui->searchButton->setIconSize(QSize(35,35));

    ui->addRegExButton->setIcon(QIcon(":/myFiles/plus-512.png"));
    ui->addRegExButton->setIconSize(QSize(35,35));

    setWindowIcon(QIcon(":/myFiles/Magnifier.png"));

    connect( ui->listOfFounds, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showContextMenu(QPoint)));

    connect(ui->searchLine, SIGNAL(textChanged(QString)), this, SLOT(checkSearchButton()));
    connect(ui->listOfFounds, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(processDoubleClickForItem(QListWidgetItem*)));
    connect(ui->searchButton, SIGNAL(clicked(bool)), this, SLOT(searchFiles()));
    connect(ui->addRegExButton, SIGNAL(clicked(bool)), this, SLOT(addRegExp()));
    connect(ui->typeOfRegExBox, SIGNAL(activated(int)), this, SLOT(setNewRegExp()));

    setDrivesToList();
}

void MainWindow::showContextMenu(const QPoint &pos)
{
    QPoint globalPos = ui->listOfFounds->mapToGlobal(pos);

    QMenu myMenu;
    myMenu.addAction("Open in folder", this, SLOT(openInFolder()));
    myMenu.addAction("Properties",  this, SLOT(properties()));

    myMenu.exec(globalPos);
}

void MainWindow::openInFolder()
{
   for (int i = 0; i < ui->listOfFounds->selectedItems().size(); ++i)
    {
           QListWidgetItem *item = ui->listOfFounds->item(ui->listOfFounds->currentRow());

           for(int i = 0; i < files.size(); i++)
               if(files[i].absoluteFilePath() == item->text() || files[i].fileName() == item->text())
               {
                   startExplorer(files[i]);
                   return;
               }
    }
}

void MainWindow::properties()
{
    for (int i = 0; i < ui->listOfFounds->selectedItems().size(); ++i)
    {
            QListWidgetItem *item = ui->listOfFounds->item(ui->listOfFounds->currentRow());
            fileInfoWindow = new FileInfoWindow(this);

            for(int i = 0; i < files.size(); i++)
                if(files[i].absoluteFilePath() == item->text() || files[i].fileName() == item->text())
                {
                    fileInfoWindow->setFileInfo(files[i]);
                    break;
                }

            fileInfoWindow->show();
    }
}

void MainWindow::setNewRegExp()
{
    qDebug() << "New Reg EXP setted";
    QRegExp rx2(ui->typeOfRegExBox->currentText());
    QRegExp currRx(".{1,260}");

    if(ui->typeOfRegExBox->currentText() != "Not used")
        currRx = rx2;

    ui->searchLine->setValidator(new QRegExpValidator(currRx, this));
}

void MainWindow::addRegExp()
{
    newRegExWindow = new SetRegExpWindow(this);

    newRegExWindow->show();
    newRegExWindow->exec();

    //qDebug() << newRegExWindow->GetResult();
    if(newRegExWindow->GetResult() != "")
        ui->typeOfRegExBox->addItem(newRegExWindow->GetResult());
}

void MainWindow::setStatusLabel(QString text)
{
    ui->searchStatusLabel->setText(text);
    if(ui->searchStatusLabel->isHidden())
        ui->searchStatusLabel->setVisible(true);
}

void MainWindow::searchFiles()
{
    qInfo("Entered to search file SLOT");

    setStatusLabel("Searching...");

    if(ui->searchLabel->text() == "Поиск:")
        fileSearcher.setStartPath("");
    else
        fileSearcher.setStartPath(mdir.currentPath());

    fileSearcher.setNameToFound(ui->searchLine->text());

    ui->listOfFounds->clear();

    files = fileSearcher.foundFiles();

    ui->listOfFounds->addItem("...");
    int i = 0;
    while(i < files.size())
    {
        ui->listOfFounds->addItem(files[i].fileName());
        i++;
    }

    double count = fileSearcher.getCountOfMatches();

    qDebug() << count;

    if(count == 0)
        setStatusLabel("No matches found.");
    else
        if(count == 1)
        {
            setStatusLabel("1 match found.");
        }
        else
        {
            setStatusLabel(QString::number(count) + " mathes found.");
        }
}

void MainWindow::checkSearchButton()
{
//  qInfo("Entered to SLOT");
    if(ui->searchLine->text().isEmpty() && ui->searchButton->isEnabled())
            ui->searchButton->setEnabled(false);
    else
        if(ui->searchLine->hasAcceptableInput() && !ui->searchButton->isEnabled())
            ui->searchButton->setEnabled(true);
        else if(!ui->searchLine->hasAcceptableInput())
            ui->searchButton->setEnabled(false);
}

void MainWindow::startExplorer(QFileInfo file)
{
    QStringList args;

    args << "/select," << QDir::toNativeSeparators(file.absoluteFilePath());

    QProcess *process = new QProcess(this);
    process->start("explorer.exe", args);
}

void MainWindow::setDrivesToList()
{
    foreach (QFileInfo mItem, mdir.drives())
    {
        ui->listOfFounds->addItem(mItem.absoluteFilePath());
        files.push_back(mItem);
    }
     ui->searchLabel->setText("Поиск:");
}

void MainWindow::setAnyFolderToList()
{
    int count = 0;
    foreach (QFileInfo mItem, mdir.entryInfoList())
    {
        if(count > 1)
        {
            ui->listOfFounds->addItem(mItem.fileName());
            files.push_back(mItem);
            lastPath = mItem.absolutePath();
        }
        count++;
    }
    if(files.isEmpty())
    {
        files.push_back(QFileInfo(mdir.currentPath()));
    }
    changeSearchLabel();
}

void MainWindow::changeSearchLabel()
{
    QString path = mdir.currentPath();

    ui->searchLabel->setText("Поиск в " + path + " :");
}

void MainWindow::processDoubleClickForItem(QListWidgetItem *item)
{
    qInfo("Entered to SLOT");

    setStatusLabel("");

    if(item->text() == "...")
    {
        QString path = lastPath;

        while(!files.isEmpty())
            files.pop_back();

        ui->listOfFounds->clear();

        if(path.data()[path.size() - 1] == '/')
            setDrivesToList();
        else
        {
            while(path.data()[path.size() - 1] != '/')
            {
                path.resize(path.size() - 1);
            }

            mdir.setPath(path);
            mdir.setCurrent(path);

            ui->listOfFounds->addItem("...");
            setAnyFolderToList();
        }

        return;
    }

    for(int i = 0; i < files.size(); i++)
        if(files[i].absoluteFilePath() == item->text() || files[i].fileName() == item->text())
        {
            if(!files[i].isDir())
            {
               startExplorer(files[i]);
               return;
            }
            lastPath = files[i].absolutePath();
            mdir.setPath(files[i].absoluteFilePath());
            mdir.setCurrent(files[i].absoluteFilePath());

            while(!files.isEmpty())
                files.pop_back();

            ui->listOfFounds->clear();

            ui->listOfFounds->addItem("...");

            setAnyFolderToList();

            return;
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}
