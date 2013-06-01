#ifndef SCORECONTROLLER_H
#define SCORECONTROLLER_H

#include <QtXml>
#include "score.h"
#include <vector>

class ScoreController
{
public:
    //Constructor
    ScoreController(QDomNodeList &scores, QDomNode &scoresNode);

    //Methods
    bool add(Score score);
    bool update(Score score);
    bool remove(id);
    Score query(id);
    vector<Score> queryAll();

    //Static methods

private:
    QDomNodeList m_scores;
    QDomNode m_scoresNode;
};

#endif // SCORECONTROLLER_H
