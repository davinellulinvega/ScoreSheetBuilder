#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include <QtXml>
#include "student.h"
#include <QList>

class StudentController
{
public:
    //Constructor
    StudentController(QDomNode &studentsNode);

    //Getters
    QDomNodeList getStudents();
    QDomNode getStudentsNode();

    //Methods
    bool add(Student student, QDomElement studentElem);
    bool update(Student student);
    bool remove(int id);
    Student query(int id);
    QList<Student> queryAll();
    bool isValidId(int id);

private:
    QDomNodeList m_students;
    QDomNode m_studentsNode;
};

#endif // STUDENTCONTROLLER_H
