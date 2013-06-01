#ifndef XMLCONTROLLER_H
#define XMLCONTROLLER_H

#include <QWidget>
#include <QtGui>
#include <QtXml>
#include <iostream>

using namespace std;

class Xmlcontroller : public QWidget
{
    Q_OBJECT
public:
    //Constructor
    explicit Xmlcontroller(QWidget *parent = 0);

    //Getter
    //Classroom
    QDomNodeList getClassrooms();
    QDomNode getClassroomsNode ();

    //Lecture
    QDomNodeList getLectures();
    QDomNode getLecturesNode ();

    //Period
    QDomNodeList getPeriods();
    QDomNode getPeriodsNode ();

    //Score
    QDomNodeList getScores();
    QDomNode getScoresNode ();

    //Student
    QDomNodeList getStudents();
    QDomNode getStudentsNode ();
protected:
    QDomDocument *document;
    QDomElement domElement;
    QDomNode root;
};

#endif // XMLCONTROLLER_H
