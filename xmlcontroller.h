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
    explicit Xmlcontroller(QWidget *parent = 0);

protected:
    QDomDocument *document;
    QDomElement domElement;
    QDomNode root;
};

#endif // XMLCONTROLLER_H
