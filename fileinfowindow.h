#ifndef FILEINFOWINDOW_H
#define FILEINFOWINDOW_H

#include <QDialog>
#include <QString>
#include <QFileInfo>
#include <QtWidgets>

namespace Ui {
class FileInfoWindow;
}

class FileInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FileInfoWindow(QWidget *parent = 0);
    void setFileInfo(QFileInfo);
    ~FileInfoWindow();

private:
    Ui::FileInfoWindow *ui;
};

#endif // FILEINFOWINDOW_H
