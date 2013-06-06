#ifndef LECTURE_H
#define LECTURE_H

//Package
#include <QString>

class Lecture
{
public:
    //Constructor
    Lecture(int id, QString title);

    //Getter & Setter
    //Id
    int getId();

    //Title
    QString getTitle();
    void setTitle(QString title);

private:
    int m_id;
    QString m_title;
};

#endif // LECTURE_H
