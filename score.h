#ifndef SCORE_H
#define SCORE_H

#include <QString>

class Score
{
public:
    //Constructor
    Score(int id, char mark);
    Score(int id, QString mark);

    //Getter & Setter
    //Id
    int getId();

    //Mark
    char getMark();
    void setMark(char mark);

private:
    int m_id;
    char m_mark;
};

#endif // SCORE_H
