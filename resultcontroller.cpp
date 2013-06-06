#include "resultcontroller.h"

ResultController::ResultController(QDomNode *reslutsNode):m_resultsNode(reslutsNode),m_results(m_resultsNode->childNodes ())
{
}

//Methods
bool ResultController::add(Result result, QDomElement resultElem) {
    //Set the attributes
    resultElem.setAttribute ("id",result.getId ());
    resultElem.setAttribute ("student",result.getStudentId ());
    resultElem.setAttribute ("lecture",result.getLectureId ());
    resultElem.setAttribute ("mark",result.getMarkId ());
    //Add the element to the tree
    this->m_resultsNode->appendChild (resultElem);
    //Update the node list
    this->m_results=this->m_resultsNode->childNodes ();
    return true;
}

bool ResultController::update(Result result) {
    //Find the element corresponding to the result
    for(int i=0; i<this->m_results.length (); i++) {
        if(this->m_results.item (i).toElement ().attribute ("id",0).toInt ()==result.getId ()) {
            this->m_results.item (i).toElement ().setAttribute ("student",result.getStudentId ());
            this->m_results.item (i).toElement ().setAttribute ("lecture",result.getLectureId ());
            this->m_results.item (i).toElement ().setAttribute ("mark",result.getMarkId ());
            return true;
        }
    }
    return false;
}

bool ResultController::remove(int id) {
    //Find the node corresponding to id
    QDomNode rmNode;
    for(int i=0; i<this->m_results.length (); i++) {
        if(this->m_results.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            rmNode=this->m_results.item (i);
            break;
        }
    }
    //Remove the node from the tree
    if(!this->m_resultsNode->removeChild (rmNode).isNull ()) {
        //Update the node list
        this->m_results=this->m_resultsNode->childNodes ();
        return true;
    }
    return false;
}

Result *ResultController::query(int id) {
    //Get the element corresponding to id
    for(int i=0; i<this->m_results.length (); i++) {
        if(this->m_results.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            return new Result(m_results.item (i).toElement ().attribute ("id",0).toInt (), m_results.item (i).toElement ().attribute ("student",0).toInt (), m_results.item (i).toElement ().attribute ("lecture",0).toInt (), m_results.item (i).toElement ().attribute ("mark",0).toInt ());
        }
    }
    return NULL;
}

QList<Result *> ResultController::queryAll() {
    //Create an empty QList
    QList<Result *> results;
    //Fill in the QList
    for(int i=0; i<this->m_results.length (); i++) {
        results.push_back(new Result(m_results.item (i).toElement ().attribute ("id",0).toInt (), m_results.item (i).toElement ().attribute ("student",0).toInt (), m_results.item (i).toElement ().attribute ("lecture",0).toInt (), m_results.item (i).toElement ().attribute ("mark",0).toInt ()));
    }
    //Return the QList
    return results;
}
