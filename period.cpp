#include "period.h"

//Constructor
Period::Period(int id):m_id(id)
{
}

Period::Period(Period *period):m_id(period->getId ())
{
}

//Getter
int Period::getId () {
    //Return the id
    return this->m_id;
}
