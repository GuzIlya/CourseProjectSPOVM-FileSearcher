#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileInfo>
#include <QVector>
#include <QListWidgetItem>
#include <QProcess>
#include "filesearcher.h"
#include <QDebug>
#include <QThread>
#include <QRegExp>
#include <QRegExpValidator>
#include "setregexpwindow.h"
#include <QMenu>
#include <QListWidgetItem>
#include "fileinfowindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void startExplorer(QFileInfo);
    void setDrivesToList();
    void setAnyFolderToList();
    void changeSearchLabel();
    void setStatusLabel(QString);
    ~MainWindow();


public slots:
    void checkSearchButton();
    void processDoubleClickForItem(QListWidgetItem*);
    void searchFiles();
    void addRegExp();
    void setNewRegExp();
    void showContextMenu(const QPoint&);
    void openInFolder();
    void properties();

private:
    Ui::MainWindow *ui;
    QDir mdir;
    QVector<QFileInfo> files;
    FileSearcher fileSearcher;
    SetRegExpWindow* newRegExWindow;
    FileInfoWindow* fileInfoWindow;
    QString lastPath;
};

#endif // MAINWINDOW_H
