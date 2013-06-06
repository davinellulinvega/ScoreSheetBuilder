#ifndef CLASSROOM_H
#define CLASSROOM_H

//Packages
#include <QString>
#include <QList>
#include "student.h"

class ClassRoom
{
public:
    //Constructor
    ClassRoom(int id, QString title);
    ClassRoom(ClassRoom *classroom);

    //Getter & Setter
    //Id
    int getId();

    //Title
    QString getTitle();
    void setTitle(QString title);

    //Students
    QList<Student> *getStudents();
    void setStudents(QList<Student> *students);

private:
    int m_id;
    QString m_title;
    QList<Student> *m_students;
};

#endif // CLASSROOM_H
