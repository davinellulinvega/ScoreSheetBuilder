#ifndef PERIODCONTROLLER_H
#define PERIODCONTROLLER_H

#include "period.h"
#include <vector>

class PeriodController
{
public:
    //Constructor
    PeriodController();

    //Methods
    bool add(Period period);
    bool update(Period period);
    bool remove(id);
    Period query(id);
    vector<Period> queryAll();

    //Static methods
};

#endif // PERIODCONTROLLER_H
