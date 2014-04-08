#include "Sorter.h"
#include <QDebug>

Sorter::Sorter()
{
}

QList<int> Sorter::sort(const QList<int> &list)
{
    QList<int> sortedList = list;

    int a = sortedList.size();
    for (int i = 0; i < a; i++)
    {
        int max = sortedList.first(); int curr;
        for (int i = 1; i < a; i++)
        {
            if (max < sortedList.at(i))
                max = sortedList.at(i);
        }
        curr = sortedList.indexOf(max);
        sortedList[curr] = sortedList.at(a-1);
        sortedList[a - 1] = max;
        a--;
    }

    return sortedList;
}
