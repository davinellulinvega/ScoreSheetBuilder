#ifndef SCORECONTROLLER_H
#define SCORECONTROLLER_H

#include "score.h"
#include <vector>

class ScoreController
{
public:
    //Constructor
    ScoreController();

    //Methods
    bool add(Score score);
    bool update(Score score);
    bool remove(id);
    Score query(id);
    vector<Score> queryAll();

    //Static methods
};

#endif // SCORECONTROLLER_H
