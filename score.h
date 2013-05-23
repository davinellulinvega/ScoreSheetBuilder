#ifndef SCORE_H
#define SCORE_H

class Score
{
public:
    //Constructor
    Score();

    //Getter & Setter
    //Id
    int getId();

    //Mark
    char getMark();
    void setMark(mark);

private:
    int m_id;
    char m_mark;
};

#endif // SCORE_H
