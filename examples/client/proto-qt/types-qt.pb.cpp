#include "types-qt.pb.h"
QTestMessageRequest::QTestMessageRequest() : _message(new custom::types::TestMessageRequest())
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
