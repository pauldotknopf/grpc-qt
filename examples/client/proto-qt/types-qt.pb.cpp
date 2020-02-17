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
void QTestMessageResponse::fillSdf()
{
	_message->set_allocated_sdf(new custom::types::TestMessageRequest());
}
void QTestMessageResponse::setSdf(custom::types::QTestMessageRequest* val)
{
	if (val) { _message->set_allocated_sdf(val->getInnerMessage()); } else { _message->clear_sdf(); }
}
custom::types::QTestMessageRequest* QTestMessageResponse::getSdf()
{
	if(!_message->has_sdf()) { return nullptr; }
	auto val = _message->sdf();
	auto result = new custom::types::TestMessageRequest();
	result->CopyFrom(val);
	return new custom::types::QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest>(result));
}
