// Qt lib import
#include <QCoreApplication>
#include <QDebug>

// JQLibrary import
#include "JQZopfli.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto result = JQZopfli::optimize( "/Users/Jason/Desktop/Source.png", "/Users/Jason/Desktop/Target.png" );

    qDebug() << "optimizeSucceed:" << result.optimizeSucceed;
    qDebug() << "originalSize:" << result.originalSize;
    qDebug() << "resultSize:" << result.resultSize;
    qDebug() << "compressionRatio:" << (int)(result.compressionRatio * 100) << "%";
    qDebug() << "timeConsuming:" << result.timeConsuming << "ms";
}
