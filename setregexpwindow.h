#ifndef SETREGEXPWINDOW_H
#define SETREGEXPWINDOW_H

#include <QDialog>
#include <QString>
#include <QDebug>

namespace Ui {
class SetRegExpWindow;
}

class SetRegExpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SetRegExpWindow(QWidget *parent = 0);
    QString GetResult(){
        return result;
    }
    void checkForAddElement();
    ~SetRegExpWindow();

private slots:
    void on_symbolButton_clicked();

    void on_anyLetterButton_clicked();

    void on_anyNumberButton_clicked();

    void on_anySymbolButton_clicked();

    void on_startCountOfSymbols_textChanged(const QString &arg1);

    void on_endCountOfSymbols_textChanged(const QString &arg1);

    void on_enterSymbolLine_textChanged(const QString &arg1);

    void on_englishButton_clicked();

    void on_russianButton_clicked();

    void on_addElemButton_clicked();

    void on_finishButton_clicked();

private:
    Ui::SetRegExpWindow *ui;
    QString result;
};

#endif // SETREGEXPWINDOW_H
