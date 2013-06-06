#ifndef PERIODCONTROLLER_H
#define PERIODCONTROLLER_H

#include <QtXml>
#include "period.h"
#include <QList>

class PeriodController
{
public:
    //Constructor
    PeriodController(QDomNode &periodsNode);

    //Methods
    bool add(Period period, QDomElement periodElem);
    bool remove(int id);
    Period *query(int id);
    QList<Period *> queryAll();

    //Static methods
    static bool isValidId(int id);
private:
    QDomNodeList m_periods;
    QDomNode m_periodsNode;
};

#endif // PERIODCONTROLLER_H
