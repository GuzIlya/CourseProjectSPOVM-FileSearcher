#include "filesearcher.h"

FileSearcher::FileSearcher()
{
    startPath = "";
    nameToFound = "";
    countOfMatches = 0;
}

void FileSearcher::setStartPath(QString path)
{
    startPath = path;
}

void FileSearcher::setNameToFound(QString name)
{
    nameToFound = name;
}

double FileSearcher::getCountOfMatches()
{
    return countOfMatches;
}

QVector<QFileInfo> FileSearcher::foundFiles()
{
    countOfMatches = 0;
    QVector<QFileInfo> files;
    QDirIterator it(startPath, QDirIterator::Subdirectories);
    while(it.hasNext()){
        if(it.fileName().contains(nameToFound))
        {
            files.push_back(it.fileInfo());
            qDebug() << it.next();
            countOfMatches++;
        }
        it.next();
    }
    return files;
}
