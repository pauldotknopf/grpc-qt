#include "types-qt.pb.h"
using namespace custom::types;
QTestMessageRequest::QTestMessageRequest() : _message(new custom::types::TestMessageRequest())
{
}
QTestMessageRequest::QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest> message) : _message(message)
{
}
QTestMessageRequest::~QTestMessageRequest()
{
}
void QTestMessageRequest::setValue2(QString val)
{
	_message->set_value2(val.toStdString());
}
QString QTestMessageRequest::getValue2()
{
	return QString::fromStdString(_message->value2());
}
QTestMessageResponse::QTestMessageResponse() : _message(new custom::types::TestMessageResponse())
{
}
QTestMessageResponse::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse> message) : _message(message)
{
}
QTestMessageResponse::~QTestMessageResponse()
{
}
void QTestMessageResponse::setValue2(QString val)
{
	_message->set_value2(val.toStdString());
}
QString QTestMessageResponse::getValue2()
{
	return QString::fromStdString(_message->value2());
}
