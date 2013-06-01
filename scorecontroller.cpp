#include "scorecontroller.h"

ScoreController::ScoreController(QDomNodeList &scores, QDomNode &scoresNode)
{
    //Simply assign the parameters to the attributs
    this->m_scoresNode=scoresNode;
    this->m_scores=scores;
}
