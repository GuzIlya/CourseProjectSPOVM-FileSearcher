#include "setregexpwindow.h"
#include "ui_setregexpwindow.h"

SetRegExpWindow::SetRegExpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetRegExpWindow)
{
    ui->setupUi(this);

    result = "";

    setWindowIcon(QIcon(":/myFiles/Magnifier.png"));
    setWindowFlags( Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint );


    ui->addElemButton->setEnabled(false);
    ui->selectLanguageBox->setVisible(false);

    ui->enterSymbolLine->setVisible(false);
    ui->enterSymbolLabel->setVisible(false);

    QRegExp rx("[0-9]{1,3}");
    QRegExp rx2(".{1,1}");

    ui->startCountOfSymbols->setValidator(new QRegExpValidator(rx, this));
    ui->endCountOfSymbols->setValidator(new QRegExpValidator(rx, this));
    ui->enterSymbolLine->setValidator(new QRegExpValidator(rx2,this));
}

SetRegExpWindow::~SetRegExpWindow()
{
    delete ui;
}

void SetRegExpWindow::checkForAddElement()
{
    if(!ui->startCountOfSymbols->text().isEmpty() && !ui->endCountOfSymbols->text().isEmpty())
    {
        if(ui->symbolButton->isChecked())
            if(!ui->enterSymbolLine->text().isEmpty())
            {
                ui->addElemButton->setEnabled(true);
                return;
            }
            else
            {
                if(ui->addElemButton->isEnabled())
                    ui->addElemButton->setEnabled(false);
                return;
            }
        if(ui->anyLetterButton->isChecked())
            if(!ui->russianButton->isChecked() && !ui->englishButton->isChecked())
            {
                if(ui->addElemButton->isEnabled())
                    ui->addElemButton->setEnabled(false);
                return;
            }
            else
            {
                ui->addElemButton->setEnabled(true);
                return;
            }

        if(ui->anyNumberButton->isChecked() || ui->anySymbolButton->isChecked())
        {
            ui->addElemButton->setEnabled(true);
            return;
        }
        else
        {
            if(ui->addElemButton->isEnabled())
                ui->addElemButton->setEnabled(false);
            return;
        }
    }
}

void SetRegExpWindow::on_symbolButton_clicked()
{
    if(ui->selectLanguageBox->isVisible())
        ui->selectLanguageBox->setVisible(false);

    if(ui->symbolButton->isChecked())
    {
        ui->enterSymbolLabel->setVisible(true);
        ui->enterSymbolLine->setVisible(true);
    }

    checkForAddElement();
}

void SetRegExpWindow::on_anyLetterButton_clicked()
{
    if(ui->enterSymbolLabel->isVisible())
    {
        ui->enterSymbolLabel->setVisible(false);
        ui->enterSymbolLine->setVisible(false);
    }

    if(ui->anyLetterButton->isChecked())
        ui->selectLanguageBox->setVisible(true);

    checkForAddElement();
}

void SetRegExpWindow::on_anyNumberButton_clicked()
{
    if(ui->enterSymbolLabel->isVisible())
    {
        ui->enterSymbolLabel->setVisible(false);
        ui->enterSymbolLine->setVisible(false);
    }
    if(ui->selectLanguageBox->isVisible())
        ui->selectLanguageBox->setVisible(false);

    checkForAddElement();
}

void SetRegExpWindow::on_anySymbolButton_clicked()
{
    if(ui->enterSymbolLabel->isVisible())
    {
        ui->enterSymbolLabel->setVisible(false);
        ui->enterSymbolLine->setVisible(false);
    }
    if(ui->selectLanguageBox->isVisible())
        ui->selectLanguageBox->setVisible(false);

    checkForAddElement();
}

void SetRegExpWindow::on_startCountOfSymbols_textChanged(const QString &arg1)
{
    if(ui->startCountOfSymbols->text() == "" || ui->startCountOfSymbols->text().toInt() > ui->endCountOfSymbols->text().toInt())
        ui->addElemButton->setEnabled(false);
    else
        checkForAddElement();
}

void SetRegExpWindow::on_endCountOfSymbols_textChanged(const QString &arg1)
{
    if(ui->endCountOfSymbols->text() == "" || ui->endCountOfSymbols->text().toInt() < ui->startCountOfSymbols->text().toInt())
        ui->addElemButton->setEnabled(false);
    else
        checkForAddElement();
}

void SetRegExpWindow::on_enterSymbolLine_textChanged(const QString &arg1)
{
    checkForAddElement();
}

void SetRegExpWindow::on_englishButton_clicked()
{
    checkForAddElement();
}

void SetRegExpWindow::on_russianButton_clicked()
{
    checkForAddElement();
}

void SetRegExpWindow::on_addElemButton_clicked()
{
    QString stringToAdd;
    if(ui->anySymbolButton->isChecked())
        stringToAdd = ".{" + ui->startCountOfSymbols->text() + "," + ui->endCountOfSymbols->text() + "}";
    else if(ui->anyNumberButton->isChecked())
            stringToAdd = "[0-9]{" + ui->startCountOfSymbols->text() + "," + ui->endCountOfSymbols->text() + "}";
         else
            if(ui->anyLetterButton->isChecked() && ui->englishButton->isChecked())
                stringToAdd = "[a-zA-Z]{" + ui->startCountOfSymbols->text() + "," + ui->endCountOfSymbols->text() + "}";
            else
                if(ui->anyLetterButton->isChecked() && ui->russianButton->isChecked())
                    stringToAdd = "[а-яА-Я]{" + ui->startCountOfSymbols->text() + "," + ui->endCountOfSymbols->text() + "}";
                else
                    stringToAdd = ui->enterSymbolLine->text() + "{" + ui->startCountOfSymbols->text() + "," + ui->endCountOfSymbols->text() + "}";

    ui->resultBrowser->setText(ui->resultBrowser->toPlainText() + stringToAdd);
}

void SetRegExpWindow::on_finishButton_clicked()
{
    result = ui->resultBrowser->toPlainText();

    //qDebug() << result;

    this->close();
}
