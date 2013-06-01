#ifndef PERIODCONTROLLER_H
#define PERIODCONTROLLER_H

#include <QtXml>
#include "period.h"
#include <vector>

class PeriodController
{
public:
    //Constructor
    PeriodController(QDomNodeList periods);

    //Methods
    bool add(Period period);
    bool update(Period period);
    bool remove(id);
    Period query(id);
    vector<Period> queryAll();

    //Static methods

private:
    QDomNodeList periods;
};

#endif // PERIODCONTROLLER_H
