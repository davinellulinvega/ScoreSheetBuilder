#include "parameterscontroller.h"

//Constructor
ParametersController::ParametersController(QDomNode parametersNode):m_parametersNode(parametersNode),m_parameters(m_parametersNode.childNodes ())
{
    this->query ();
}

//Methods
bool ParametersController::update(Parameters parameters) {
    //Get the parameter element
    QDomElement parameter(this->m_parametersNode.firstChildElement ("parameter"));

    //Set the attributes
    parameter.setAttribute ("modifs","true");
    parameter.setAttribute ("classroom",parameters.getClassroom ());
    parameter.setAttribute ("period",parameters.getPeriod ());
    return true;
}

Parameters ParametersController::query() {
    //Get the parameter element
    QDomElement parameters(this->m_parametersNode.firstChildElement ("parameter"));
    //Return the parameters
    return new Parameters((bool)(parameters.attributeNode ("modifs")),(int)(parameters.attributeNode ("classroom")), (int)(parameters.attributeNode ("period")));
}
