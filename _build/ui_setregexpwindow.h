/********************************************************************************
** Form generated from reading UI file 'setregexpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETREGEXPWINDOW_H
#define UI_SETREGEXPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SetRegExpWindow
{
public:
    QTextBrowser *resultBrowser;
    QPushButton *finishButton;
    QGroupBox *chooseElemBox;
    QRadioButton *symbolButton;
    QRadioButton *anyLetterButton;
    QRadioButton *anyNumberButton;
    QRadioButton *anySymbolButton;
    QLineEdit *startCountOfSymbols;
    QLineEdit *endCountOfSymbols;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *addElemButton;
    QLabel *enterSymbolLabel;
    QLineEdit *enterSymbolLine;
    QGroupBox *selectLanguageBox;
    QRadioButton *englishButton;
    QRadioButton *russianButton;

    void setupUi(QDialog *SetRegExpWindow)
    {
        if (SetRegExpWindow->objectName().isEmpty())
            SetRegExpWindow->setObjectName(QStringLiteral("SetRegExpWindow"));
        SetRegExpWindow->resize(425, 330);
        resultBrowser = new QTextBrowser(SetRegExpWindow);
        resultBrowser->setObjectName(QStringLiteral("resultBrowser"));
        resultBrowser->setGeometry(QRect(30, 30, 271, 41));
        finishButton = new QPushButton(SetRegExpWindow);
        finishButton->setObjectName(QStringLiteral("finishButton"));
        finishButton->setGeometry(QRect(270, 280, 141, 41));
        chooseElemBox = new QGroupBox(SetRegExpWindow);
        chooseElemBox->setObjectName(QStringLiteral("chooseElemBox"));
        chooseElemBox->setGeometry(QRect(20, 90, 171, 161));
        symbolButton = new QRadioButton(chooseElemBox);
        symbolButton->setObjectName(QStringLiteral("symbolButton"));
        symbolButton->setGeometry(QRect(10, 30, 95, 20));
        anyLetterButton = new QRadioButton(chooseElemBox);
        anyLetterButton->setObjectName(QStringLiteral("anyLetterButton"));
        anyLetterButton->setGeometry(QRect(10, 60, 95, 20));
        anyNumberButton = new QRadioButton(chooseElemBox);
        anyNumberButton->setObjectName(QStringLiteral("anyNumberButton"));
        anyNumberButton->setGeometry(QRect(10, 90, 95, 20));
        anySymbolButton = new QRadioButton(chooseElemBox);
        anySymbolButton->setObjectName(QStringLiteral("anySymbolButton"));
        anySymbolButton->setGeometry(QRect(10, 120, 95, 20));
        startCountOfSymbols = new QLineEdit(SetRegExpWindow);
        startCountOfSymbols->setObjectName(QStringLiteral("startCountOfSymbols"));
        startCountOfSymbols->setGeometry(QRect(70, 290, 41, 22));
        endCountOfSymbols = new QLineEdit(SetRegExpWindow);
        endCountOfSymbols->setObjectName(QStringLiteral("endCountOfSymbols"));
        endCountOfSymbols->setGeometry(QRect(140, 290, 41, 22));
        label = new QLabel(SetRegExpWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 290, 41, 16));
        label_2 = new QLabel(SetRegExpWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 290, 91, 16));
        label_3 = new QLabel(SetRegExpWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 231, 16));
        addElemButton = new QPushButton(SetRegExpWindow);
        addElemButton->setObjectName(QStringLiteral("addElemButton"));
        addElemButton->setGeometry(QRect(310, 30, 101, 41));
        enterSymbolLabel = new QLabel(SetRegExpWindow);
        enterSymbolLabel->setObjectName(QStringLiteral("enterSymbolLabel"));
        enterSymbolLabel->setGeometry(QRect(200, 120, 101, 16));
        enterSymbolLine = new QLineEdit(SetRegExpWindow);
        enterSymbolLine->setObjectName(QStringLiteral("enterSymbolLine"));
        enterSymbolLine->setGeometry(QRect(310, 120, 31, 22));
        selectLanguageBox = new QGroupBox(SetRegExpWindow);
        selectLanguageBox->setObjectName(QStringLiteral("selectLanguageBox"));
        selectLanguageBox->setGeometry(QRect(200, 160, 131, 80));
        englishButton = new QRadioButton(selectLanguageBox);
        englishButton->setObjectName(QStringLiteral("englishButton"));
        englishButton->setGeometry(QRect(10, 20, 95, 20));
        russianButton = new QRadioButton(selectLanguageBox);
        russianButton->setObjectName(QStringLiteral("russianButton"));
        russianButton->setGeometry(QRect(10, 50, 95, 20));
        label_2->raise();
        resultBrowser->raise();
        finishButton->raise();
        chooseElemBox->raise();
        label->raise();
        label_3->raise();
        addElemButton->raise();
        enterSymbolLabel->raise();
        enterSymbolLine->raise();
        selectLanguageBox->raise();
        startCountOfSymbols->raise();
        endCountOfSymbols->raise();

        retranslateUi(SetRegExpWindow);

        QMetaObject::connectSlotsByName(SetRegExpWindow);
    } // setupUi

    void retranslateUi(QDialog *SetRegExpWindow)
    {
        SetRegExpWindow->setWindowTitle(QApplication::translate("SetRegExpWindow", "New RegEx", Q_NULLPTR));
        finishButton->setText(QApplication::translate("SetRegExpWindow", "Finish formation", Q_NULLPTR));
        chooseElemBox->setTitle(QApplication::translate("SetRegExpWindow", "Choose element to add:", Q_NULLPTR));
        symbolButton->setText(QApplication::translate("SetRegExpWindow", "Symbol", Q_NULLPTR));
        anyLetterButton->setText(QApplication::translate("SetRegExpWindow", "Any letter", Q_NULLPTR));
        anyNumberButton->setText(QApplication::translate("SetRegExpWindow", "Any number", Q_NULLPTR));
        anySymbolButton->setText(QApplication::translate("SetRegExpWindow", "Any symbol", Q_NULLPTR));
        label->setText(QApplication::translate("SetRegExpWindow", "From", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetRegExpWindow", "to                     .", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetRegExpWindow", "Enter count \320\276f symbols:", Q_NULLPTR));
        addElemButton->setText(QApplication::translate("SetRegExpWindow", "Add element", Q_NULLPTR));
        enterSymbolLabel->setText(QApplication::translate("SetRegExpWindow", "Enter symbol:", Q_NULLPTR));
        selectLanguageBox->setTitle(QApplication::translate("SetRegExpWindow", "Select language:", Q_NULLPTR));
        englishButton->setText(QApplication::translate("SetRegExpWindow", "English", Q_NULLPTR));
        russianButton->setText(QApplication::translate("SetRegExpWindow", "Russian", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetRegExpWindow: public Ui_SetRegExpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETREGEXPWINDOW_H
