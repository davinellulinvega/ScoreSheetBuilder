#include "resultcontroller.h"

ResultController::ResultController(QDomNode &reslutsNode):m_resultsNode(resultsNode),m_results(m_resultsNode.childNodes ())
{
}
