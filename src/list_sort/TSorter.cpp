#include "TSorter.h"

TSorter::TSorter()
{
}

void TSorter::TestSorting_data()
{
    QTest::addColumn< QList<int> >("list");
    QTest::addColumn< QList<int> >("expectedList");

    QTest::newRow("empty-list") << QList<int>()
                                << QList<int>();

    QTest::newRow("single-elemet-list") << (QList<int>() << 1)
                                        << (QList<int>() << 1);

    QTest::newRow("two-elements-list1") << (QList<int>() << 1 << 2)
                                        << (QList<int>() << 1 << 2);

    QTest::newRow("two-elements-list2") << (QList<int>() << 3 << 2)
                                        << (QList<int>() << 2 << 3);

    QTest::newRow("two-elements-list3") << (QList<int>() << 1 << 1)
                                        << (QList<int>() << 1 << 1);

    QTest::newRow("three-elements-list1") << (QList<int>() << 1 << 2 << 3)
                                          << (QList<int>() << 1 << 2 << 3);

    QTest::newRow("three-elements-list2") << (QList<int>() << 2 << 1 << 3)
                                          << (QList<int>() << 1 << 2 << 3);

    QTest::newRow("three-elements-list3") << (QList<int>() << 3 << 1 << 2)
                                          << (QList<int>() << 1 << 2 << 3);

    QTest::newRow("three-elements-list4") << (QList<int>() << 3 << 2 << 1)
                                          << (QList<int>() << 1 << 2 << 3);

    QTest::newRow("ten-elements-list") << (QList<int>() << 10 << 9 << 8 << 7 << 6 << 5 << 4 << 3 << 2 << 1)
                                       << (QList<int>() << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10);

}

void TSorter::TestSorting()
{
    QFETCH(QList<int>, list);
    QFETCH(QList<int>, expectedList);

    const QList<int> actualList = Sorter::sort(list);

    QCOMPARE(actualList, expectedList);
}
