#include "periodcontroller.h"

PeriodController::PeriodController(QDomNodeList &periods, QDomNode &periodsNode)
{
    //Simply assign the parameters to the attributs
    this->m_periodsNode=periodsNode;
    this->m_periods=periods;
}
