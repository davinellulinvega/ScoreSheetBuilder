#ifndef STUDENT_H
#define STUDENT_H

//Packages
#include <QString>

class Student
{
public:
    //Constructor
    Student(int id, QString fName, QString name, QString globalCom);
    Student(Student *student);

    //Getter & Setter
    //Id
    int getId();
    void setId(int id);

    //First Name
    QString getFirstName();
    void setFirstName(QString firstName);

    //Name
    QString getName();
    void setName(QString name);

    //GlobalComment
    QString getGlobalComment();
    void setGlobalComment(QString str);

private:
    int m_id;
    QString m_firstName;
    QString m_name;
    QString m_globalComment;

};

#endif // STUDENT_H
