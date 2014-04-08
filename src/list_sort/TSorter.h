#ifndef TSORTER_H

#define TSORTER_H

#include <QtTest/QTest>

#include "Sorter.h"

class TSorter : public QObject
{
    Q_OBJECT
public:
    TSorter();

private slots:
    void TestSorting_data();
    void TestSorting();
};

#endif // TSORTER_H
