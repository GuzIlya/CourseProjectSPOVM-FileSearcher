/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listOfFounds;
    QLineEdit *searchLine;
    QPushButton *searchButton;
    QLabel *label;
    QComboBox *typeOfRegExBox;
    QPushButton *addRegExButton;
    QLabel *searchLabel;
    QLabel *searchStatusLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(410, 546);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listOfFounds = new QListWidget(centralWidget);
        listOfFounds->setObjectName(QStringLiteral("listOfFounds"));
        listOfFounds->setGeometry(QRect(20, 130, 331, 321));
        searchLine = new QLineEdit(centralWidget);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(20, 50, 331, 41));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(360, 50, 41, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 460, 91, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        typeOfRegExBox = new QComboBox(centralWidget);
        typeOfRegExBox->setObjectName(QStringLiteral("typeOfRegExBox"));
        typeOfRegExBox->setGeometry(QRect(20, 490, 331, 41));
        addRegExButton = new QPushButton(centralWidget);
        addRegExButton->setObjectName(QStringLiteral("addRegExButton"));
        addRegExButton->setGeometry(QRect(360, 490, 41, 41));
        searchLabel = new QLabel(centralWidget);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setGeometry(QRect(20, 20, 331, 31));
        QFont font1;
        font1.setPointSize(10);
        searchLabel->setFont(font1);
        searchStatusLabel = new QLabel(centralWidget);
        searchStatusLabel->setObjectName(QStringLiteral("searchStatusLabel"));
        searchStatusLabel->setGeometry(QRect(20, 110, 331, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Searcher", Q_NULLPTR));
        searchButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "RegEx:", Q_NULLPTR));
        addRegExButton->setText(QString());
        searchLabel->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", Q_NULLPTR));
        searchStatusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
