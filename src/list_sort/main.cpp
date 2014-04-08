#include <QCoreApplication>

#include "TSorter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TSorter tSorter;

    QTest::qExec(&tSorter);

    return a.exec();
}
