#include "scorecontroller.h"

ScoreController::ScoreController(QDomNode &scoresNode)
{
    //Simply assign the parameters to the attributs
    this->m_scoresNode=scoresNode;
    this->m_scores=this->m_scoresNode.childNodes ();
}
