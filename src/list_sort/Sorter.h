#ifndef SORTER_H

#define SORTER_H

#include <QtCore>

class Sorter
{
public:
    Sorter();

    static QList<int> sort(const QList<int> &list);
};

#endif // SORTER_H
