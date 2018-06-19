/********************************************************************************
** Form generated from reading UI file 'fileinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINFOWINDOW_H
#define UI_FILEINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_FileInfoWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *nameLabel;
    QLabel *typeLabel;
    QLabel *extensionLabel;
    QLabel *sizeLabel;
    QLabel *createdOnLabel;
    QLabel *lastReadLabel;
    QLabel *lastModified;
    QPushButton *pushButton;
    QTextBrowser *filePathBrowser;

    void setupUi(QDialog *FileInfoWindow)
    {
        if (FileInfoWindow->objectName().isEmpty())
            FileInfoWindow->setObjectName(QStringLiteral("FileInfoWindow"));
        FileInfoWindow->resize(321, 371);
        label = new QLabel(FileInfoWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 191, 31));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(FileInfoWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 55, 31));
        label_2->setFont(font);
        label_3 = new QLabel(FileInfoWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 101, 31));
        label_3->setFont(font);
        label_4 = new QLabel(FileInfoWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 101, 16));
        label_4->setFont(font);
        label_5 = new QLabel(FileInfoWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 111, 16));
        label_5->setFont(font);
        label_6 = new QLabel(FileInfoWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 300, 111, 16));
        label_6->setFont(font);
        label_7 = new QLabel(FileInfoWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 240, 111, 16));
        label_7->setFont(font);
        label_8 = new QLabel(FileInfoWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 270, 91, 16));
        label_8->setFont(font);
        nameLabel = new QLabel(FileInfoWindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(90, 10, 221, 31));
        nameLabel->setFont(font);
        typeLabel = new QLabel(FileInfoWindow);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setGeometry(QRect(90, 40, 221, 31));
        typeLabel->setFont(font);
        extensionLabel = new QLabel(FileInfoWindow);
        extensionLabel->setObjectName(QStringLiteral("extensionLabel"));
        extensionLabel->setGeometry(QRect(140, 160, 151, 41));
        extensionLabel->setFont(font);
        sizeLabel = new QLabel(FileInfoWindow);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setGeometry(QRect(140, 200, 171, 16));
        sizeLabel->setFont(font);
        createdOnLabel = new QLabel(FileInfoWindow);
        createdOnLabel->setObjectName(QStringLiteral("createdOnLabel"));
        createdOnLabel->setGeometry(QRect(140, 240, 181, 16));
        createdOnLabel->setFont(font);
        lastReadLabel = new QLabel(FileInfoWindow);
        lastReadLabel->setObjectName(QStringLiteral("lastReadLabel"));
        lastReadLabel->setGeometry(QRect(140, 270, 171, 16));
        lastReadLabel->setFont(font);
        lastModified = new QLabel(FileInfoWindow);
        lastModified->setObjectName(QStringLiteral("lastModified"));
        lastModified->setGeometry(QRect(140, 300, 171, 16));
        lastModified->setFont(font);
        pushButton = new QPushButton(FileInfoWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 330, 93, 28));
        filePathBrowser = new QTextBrowser(FileInfoWindow);
        filePathBrowser->setObjectName(QStringLiteral("filePathBrowser"));
        filePathBrowser->setGeometry(QRect(20, 100, 271, 51));

        retranslateUi(FileInfoWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), FileInfoWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(FileInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *FileInfoWindow)
    {
        FileInfoWindow->setWindowTitle(QApplication::translate("FileInfoWindow", "Properties", Q_NULLPTR));
        label->setText(QApplication::translate("FileInfoWindow", "Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("FileInfoWindow", "Type:", Q_NULLPTR));
        label_3->setText(QApplication::translate("FileInfoWindow", "File path:", Q_NULLPTR));
        label_4->setText(QApplication::translate("FileInfoWindow", "Extension:", Q_NULLPTR));
        label_5->setText(QApplication::translate("FileInfoWindow", "Size:", Q_NULLPTR));
        label_6->setText(QApplication::translate("FileInfoWindow", "Last modified:", Q_NULLPTR));
        label_7->setText(QApplication::translate("FileInfoWindow", "Created on:", Q_NULLPTR));
        label_8->setText(QApplication::translate("FileInfoWindow", "Last read:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        extensionLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        sizeLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        createdOnLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        lastReadLabel->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        lastModified->setText(QApplication::translate("FileInfoWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FileInfoWindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileInfoWindow: public Ui_FileInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINFOWINDOW_H
