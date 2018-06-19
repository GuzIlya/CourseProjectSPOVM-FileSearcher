#include "fileinfowindow.h"
#include "ui_fileinfowindow.h"

FileInfoWindow::FileInfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileInfoWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/myFiles/Magnifier.png"));
    setWindowFlags( Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint );

}

qint64 dirSize(QString dirPath) {
    qint64 size = 0;
    QDir dir(dirPath);
    //calculate total size of current directories' files
    QDir::Filters fileFilters = QDir::Files|QDir::System|QDir::Hidden;
    for(QString filePath : dir.entryList(fileFilters)) {
        QFileInfo fi(dir, filePath);
        size+= fi.size();
    }
    //add size of child directories recursively
    QDir::Filters dirFilters = QDir::Dirs|QDir::NoDotAndDotDot|QDir::System|QDir::Hidden;
    for(QString childDirPath : dir.entryList(dirFilters))
        size+= dirSize(dirPath + QDir::separator() + childDirPath);
    return size;
}

QString formatSize(qint64 size) {
    QStringList units = {"Bytes", "KB", "MB", "GB", "TB", "PB"};
    int i;
    double outputSize = size;
    for(i=0; i<units.size()-1; i++) {
        if(outputSize<1024) break;
        outputSize= outputSize/1024;
    }
    return QString("%0 %1").arg(outputSize, 0, 'f', 2).arg(units[i]);
}

void FileInfoWindow::setFileInfo(QFileInfo fileInfo)
{
    ui->nameLabel->setText(fileInfo.baseName());
    ui->filePathBrowser->setText(fileInfo.absolutePath());
    ui->extensionLabel->setText(fileInfo.suffix());

    ui->sizeLabel->setText(formatSize(fileInfo.size()));

    ui->lastModified->setText(fileInfo.lastModified().date().toString("dd.MM.yyyy, ") + fileInfo.lastModified().time().toString());

    ui->lastReadLabel->setText(fileInfo.lastRead().date().toString("dd.MM.yyyy, ") + fileInfo.lastRead().time().toString());

    ui->createdOnLabel->setText( fileInfo.created().date().toString("dd.MM.yyyy, ") +  fileInfo.created().time().toString());



    if(fileInfo.isDir())
    {
        qint64 size = dirSize(fileInfo.absoluteFilePath());
        ui->sizeLabel->setText(formatSize(size));
        ui->typeLabel->setText("directory");
        ui->extensionLabel->setText("no extension");
    }
    else
        if(fileInfo.isExecutable())
            ui->typeLabel->setText("executable");
        else
            ui->typeLabel->setText("file");

}

FileInfoWindow::~FileInfoWindow()
{
    delete ui;
}
