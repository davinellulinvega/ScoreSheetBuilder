#include "score.h"

//Constructor
Score::Score(int id, char mark):m_id(id),m_mark(mark)
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

void Score::setMark(char mark) {
    //Set the mark
    this->m_mark=mark;
}
