#ifndef FILESEARCHER_H
#define FILESEARCHER_H

#include <QString>
#include <QVector>
#include <QDir>
#include <QFileInfo>
#include <QDirIterator>
#include <QDebug>

class FileSearcher
{
private:
    QString startPath;
    QString nameToFound;
    double countOfMatches;
public:
    FileSearcher();
    void setStartPath(QString);
    void setNameToFound(QString);
    double getCountOfMatches();
    QVector<QFileInfo> foundFiles();
};

#endif // FILESEARCHER_H
