#include "periodcontroller.h"

//Constructor
PeriodController::PeriodController(QDomNode &periodsNode)
{
    //Simply assign the parameters to the attributs
    this->m_periodsNode=periodsNode;
    this->m_periods=this->m_periodsNode.childNodes ();
}


//Methods
bool PeriodController::add(Period period, QDomElement periodElem) {
    //Set the id attribute
    periodElem.setAttribute ("id", period.getId ());
    //Add the element to the tree
    this->m_periodsNode.appendChild (periodElem);
    //Update the node list
    this->m_periods=this->m_periodsNode.childNodes ();
    return true;
}

bool PeriodController::remove(int id) {
    //Get the element to be removed
    QDomNode rmNode;
    for(int i=0; i<this->m_periods.length (); i++) {
        if(this->m_periods.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            rmNode=this->m_periods.item (i);
            break;
        }
    }
    //Remove the node
    if(this->m_periodsNode.removeChild (rmNode)) {
        //Update the node list
        this->m_periods=this->m_periodsNode.childNodes ();
        return true;
    }
    return false;
}

Period PeriodController::query(int id) {
    //Get the element corresponding to id
    for(int i=0; i<this->m_periods.length (); i++) {
        if(this->m_periods.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            //Return the element
            return new Period(this->m_periods.item (i).toElement ().attribute ("id",0).toInt ());
        }
    }
    return NULL;
}

QList<Period> PeriodController::queryAll() {
    //Create an empty QList
    QList<Period> periods;
    //Fill in the QList
    for(int i=0; i<this->m_periods.length (); i++) {
        periods.push_back (new Period(this->m_periods.item (i).toElement ().attribute ("id",0).toInt ()));
    }
    //Return the QList
    return periods;
}
