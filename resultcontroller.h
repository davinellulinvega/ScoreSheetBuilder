#ifndef RESULTCONTROLLER_H
#define RESULTCONTROLLER_H

#include <QtXml>
#include "result.h"
#include <vector>

class ResultController
{
public:
    //Constructor
    ResultController(QDomNode &reslutsNode);

    //Methods
    bool add(Result result);
    bool update(Result result);
    bool remove(int id);
    Result query(int id);
    vector<Result> queryAll();

private:
    QDomNodeList m_results;
    QDomNode m_resultsNode;

};

#endif // RESULTCONTROLLER_H
