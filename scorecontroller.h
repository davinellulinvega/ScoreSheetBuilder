#ifndef SCORECONTROLLER_H
#define SCORECONTROLLER_H

#include <QtXml>
#include "score.h"
#include <vector>

class ScoreController
{
public:
    //Constructor
    ScoreController(QDomNode &scoresNode);

    //Methods
    Score query(int id);
    vector<Score> queryAll();

    //Static methods

private:
    QDomNodeList m_scores;
    QDomNode m_scoresNode;
};

#endif // SCORECONTROLLER_H
