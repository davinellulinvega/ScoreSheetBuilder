#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include <QtXml>
#include "student.h"
#include <vector>

class StudentController
{
public:
    //Constructor
    StudentController(QDomNodeList &students, QDomNode &studentsNode);

    //Getters
    QDomNodeList getStudents();
    QDomNode getStudentsNode();

    //Methods
    bool add(Student student);
    bool update(Student student);
    bool remove(id);
    Student query(id);
    vector<Student> queryAll();

    //Static Methods
    static bool isValidId(id);

private:
    QDomNodeList m_students;
    QDomNode m_studentsNode;
};

#endif // STUDENTCONTROLLER_H
