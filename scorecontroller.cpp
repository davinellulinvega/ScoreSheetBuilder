#include "scorecontroller.h"

//Constructor
ScoreController::ScoreController(QDomNode &scoresNode):m_scoresNode(scoresNode),m_scores(m_scoresNode.childNodes ())
{
}

//Methods
Score ScoreController::query(int id) {
    //Find the element
    for(int i=0; i<this->m_scores.length (); i++) {
        if(this->m_scores.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            return new Score(this->m_scores.item (i).toElement ().attribute ("id",0).toInt (), this->m_scores.item (i).toElement ().attribute ("mark"));
        }
    }
}

vector<Score> ScoreController::queryAll() {
    //Create an empty vector
    vector<Score> scores;
    //Fill in the vector
    for(int i=0; i<this->m_scores.length (); i++) {
        scores.push_back (new Score(this->m_scores.item (i).toElement ().attribute ("id",0).toInt (), this->m_scores.item (i).toElement ().attribute ("mark")));
    }
    //Return the vector
    return scores;
}
