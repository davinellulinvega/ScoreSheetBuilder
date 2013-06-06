#include "score.h"

//Constructor
Score::Score(int id, char mark):m_id(id),m_mark(mark)
{
}

Score::Score(int id, QString mark):m_id(id)
{
    if(mark=="A") {
        m_mark='A';
    }
    else if (mark=="B") {
        m_mark='B';
    }
    else if (mark=="C") {
        m_mark='C';
    }
    else if (mark=="D") {
        m_mark='D';
    }
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

void Score::setMark(char mark) {
    //Set the mark
    this->m_mark=mark;
}
