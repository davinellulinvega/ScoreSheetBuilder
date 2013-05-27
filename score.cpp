#include "score.h"

//Constructor
Score::Score()
{
}

//Getter & Setter
//Id
int Score::getId() {
    //Retrun the id
    return this->m_id;
}

//Mark
char Score::getMark() {
    //Return the mark
    return this->m_mark;
}

void Score::setMark(mark) {
    //Set the mark
    this->m_mark=mark;
}
