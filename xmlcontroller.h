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
    QDomNode getClassroomsNode ();

    //Lecture
    QDomNode getLecturesNode ();

    //Period
    QDomNode getPeriodsNode ();

    //Score
    QDomNode getScoresNode ();

    //Student
    QDomNode getStudentsNode ();

    //Methods
    bool save();
protected:
    QDomDocument *document;
    QDomElement domElement;
    QDomNode root;
};

#endif // XMLCONTROLLER_H
