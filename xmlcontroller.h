#ifndef XMLCONTROLLER_H
#define XMLCONTROLLER_H

#include <QWidget>
#include <QtGui>
#include <QtXml>

class Xmlcontroller : public QWidget
{
    Q_OBJECT
public:
    //Constructor
    explicit Xmlcontroller(QWidget *parent = 0);

    //Getter
    //Classroom
    QDomNode *getClassroomsNode();

    //Lecture
    QDomNode *getLecturesNode (int classId, int periodId);

    //Period
    QDomNode *getPeriodsNode (int classId);

    //Score
    QDomNode *getScoresNode ();

    //Student
    QDomNode *getStudentsNode (int classId);

    //Result
    QDomNode *getResultsNode (int classId, int periodId);

    //Parameters
    QDomNode *getParametersNode ();

    //Methods
    bool save();
    QDomElement createElement(QString elemName);

protected:
    QDomDocument *document;
    QDomElement domElement;
    QDomNode root;
};

#endif // XMLCONTROLLER_H
