#include "gen-qt.pb.h"
using namespace Tests;
QTest1ListenEventStream::QTest1ListenEventStream() : _message(new Tests::Test1ListenEventStream())
{
}
QTest1ListenEventStream::QTest1ListenEventStream(QSharedPointer<Tests::Test1ListenEventStream> message) : _message(message)
{
}
QTest1ListenEventStream::~QTest1ListenEventStream()
{
}
QTest1CreateResponse::QTest1CreateResponse() : _message(new Tests::Test1CreateResponse())
{
}
QTest1CreateResponse::QTest1CreateResponse(QSharedPointer<Tests::Test1CreateResponse> message) : _message(message)
{
}
QTest1CreateResponse::~QTest1CreateResponse()
{
}
QTest1StopRequest::QTest1StopRequest() : _message(new Tests::Test1StopRequest())
{
}
QTest1StopRequest::QTest1StopRequest(QSharedPointer<Tests::Test1StopRequest> message) : _message(message)
{
}
QTest1StopRequest::~QTest1StopRequest()
{
}
QTest1StopResponse::QTest1StopResponse() : _message(new Tests::Test1StopResponse())
{
}
QTest1StopResponse::QTest1StopResponse(QSharedPointer<Tests::Test1StopResponse> message) : _message(message)
{
}
QTest1StopResponse::~QTest1StopResponse()
{
}
QTest1PropStringSetRequest::QTest1PropStringSetRequest() : _message(new Tests::Test1PropStringSetRequest())
{
}
QTest1PropStringSetRequest::QTest1PropStringSetRequest(QSharedPointer<Tests::Test1PropStringSetRequest> message) : _message(message)
{
}
QTest1PropStringSetRequest::~QTest1PropStringSetRequest()
{
}
void QTest1PropStringSetRequest::fillValue()
{
	_message->set_allocated_value(new google::protobuf::StringValue());
}
void QTest1PropStringSetRequest::setValue(google::protobuf::QStringValue* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
google::protobuf::QStringValue* QTest1PropStringSetRequest::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new google::protobuf::StringValue();
	result->CopyFrom(val);
	return new google::protobuf::QStringValue(QSharedPointer<google::protobuf::StringValue>(result));
}
QTest1PropStringSetResponse::QTest1PropStringSetResponse() : _message(new Tests::Test1PropStringSetResponse())
{
}
QTest1PropStringSetResponse::QTest1PropStringSetResponse(QSharedPointer<Tests::Test1PropStringSetResponse> message) : _message(message)
{
}
QTest1PropStringSetResponse::~QTest1PropStringSetResponse()
{
}
QTest1PropStringGetRequest::QTest1PropStringGetRequest() : _message(new Tests::Test1PropStringGetRequest())
{
}
QTest1PropStringGetRequest::QTest1PropStringGetRequest(QSharedPointer<Tests::Test1PropStringGetRequest> message) : _message(message)
{
}
QTest1PropStringGetRequest::~QTest1PropStringGetRequest()
{
}
QTest1PropStringGetResponse::QTest1PropStringGetResponse() : _message(new Tests::Test1PropStringGetResponse())
{
}
QTest1PropStringGetResponse::QTest1PropStringGetResponse(QSharedPointer<Tests::Test1PropStringGetResponse> message) : _message(message)
{
}
QTest1PropStringGetResponse::~QTest1PropStringGetResponse()
{
}
void QTest1PropStringGetResponse::fillValue()
{
	_message->set_allocated_value(new google::protobuf::StringValue());
}
void QTest1PropStringGetResponse::setValue(google::protobuf::QStringValue* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
google::protobuf::QStringValue* QTest1PropStringGetResponse::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new google::protobuf::StringValue();
	result->CopyFrom(val);
	return new google::protobuf::QStringValue(QSharedPointer<google::protobuf::StringValue>(result));
}
QTest1PropStringPropertyChanged::QTest1PropStringPropertyChanged() : _message(new Tests::Test1PropStringPropertyChanged())
{
}
QTest1PropStringPropertyChanged::QTest1PropStringPropertyChanged(QSharedPointer<Tests::Test1PropStringPropertyChanged> message) : _message(message)
{
}
QTest1PropStringPropertyChanged::~QTest1PropStringPropertyChanged()
{
}
void QTest1PropStringPropertyChanged::fillValue()
{
	_message->set_allocated_value(new google::protobuf::StringValue());
}
void QTest1PropStringPropertyChanged::setValue(google::protobuf::QStringValue* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
google::protobuf::QStringValue* QTest1PropStringPropertyChanged::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new google::protobuf::StringValue();
	result->CopyFrom(val);
	return new google::protobuf::QStringValue(QSharedPointer<google::protobuf::StringValue>(result));
}
QTest1PropComplexSetRequest::QTest1PropComplexSetRequest() : _message(new Tests::Test1PropComplexSetRequest())
{
}
QTest1PropComplexSetRequest::QTest1PropComplexSetRequest(QSharedPointer<Tests::Test1PropComplexSetRequest> message) : _message(message)
{
}
QTest1PropComplexSetRequest::~QTest1PropComplexSetRequest()
{
}
void QTest1PropComplexSetRequest::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1PropComplexSetRequest::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1PropComplexSetRequest::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1PropComplexSetResponse::QTest1PropComplexSetResponse() : _message(new Tests::Test1PropComplexSetResponse())
{
}
QTest1PropComplexSetResponse::QTest1PropComplexSetResponse(QSharedPointer<Tests::Test1PropComplexSetResponse> message) : _message(message)
{
}
QTest1PropComplexSetResponse::~QTest1PropComplexSetResponse()
{
}
QTest1PropComplexGetRequest::QTest1PropComplexGetRequest() : _message(new Tests::Test1PropComplexGetRequest())
{
}
QTest1PropComplexGetRequest::QTest1PropComplexGetRequest(QSharedPointer<Tests::Test1PropComplexGetRequest> message) : _message(message)
{
}
QTest1PropComplexGetRequest::~QTest1PropComplexGetRequest()
{
}
QTest1PropComplexGetResponse::QTest1PropComplexGetResponse() : _message(new Tests::Test1PropComplexGetResponse())
{
}
QTest1PropComplexGetResponse::QTest1PropComplexGetResponse(QSharedPointer<Tests::Test1PropComplexGetResponse> message) : _message(message)
{
}
QTest1PropComplexGetResponse::~QTest1PropComplexGetResponse()
{
}
void QTest1PropComplexGetResponse::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1PropComplexGetResponse::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1PropComplexGetResponse::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1PropComplexPropertyChanged::QTest1PropComplexPropertyChanged() : _message(new Tests::Test1PropComplexPropertyChanged())
{
}
QTest1PropComplexPropertyChanged::QTest1PropComplexPropertyChanged(QSharedPointer<Tests::Test1PropComplexPropertyChanged> message) : _message(message)
{
}
QTest1PropComplexPropertyChanged::~QTest1PropComplexPropertyChanged()
{
}
void QTest1PropComplexPropertyChanged::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1PropComplexPropertyChanged::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1PropComplexPropertyChanged::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1TestEventEvent::QTest1TestEventEvent() : _message(new Tests::Test1TestEventEvent())
{
}
QTest1TestEventEvent::QTest1TestEventEvent(QSharedPointer<Tests::Test1TestEventEvent> message) : _message(message)
{
}
QTest1TestEventEvent::~QTest1TestEventEvent()
{
}
void QTest1TestEventEvent::fillValue()
{
	_message->set_allocated_value(new google::protobuf::StringValue());
}
void QTest1TestEventEvent::setValue(google::protobuf::QStringValue* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
google::protobuf::QStringValue* QTest1TestEventEvent::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new google::protobuf::StringValue();
	result->CopyFrom(val);
	return new google::protobuf::QStringValue(QSharedPointer<google::protobuf::StringValue>(result));
}
QTest1TestEventComplexEvent::QTest1TestEventComplexEvent() : _message(new Tests::Test1TestEventComplexEvent())
{
}
QTest1TestEventComplexEvent::QTest1TestEventComplexEvent(QSharedPointer<Tests::Test1TestEventComplexEvent> message) : _message(message)
{
}
QTest1TestEventComplexEvent::~QTest1TestEventComplexEvent()
{
}
void QTest1TestEventComplexEvent::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1TestEventComplexEvent::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1TestEventComplexEvent::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1TestEventNoDataEvent::QTest1TestEventNoDataEvent() : _message(new Tests::Test1TestEventNoDataEvent())
{
}
QTest1TestEventNoDataEvent::QTest1TestEventNoDataEvent(QSharedPointer<Tests::Test1TestEventNoDataEvent> message) : _message(message)
{
}
QTest1TestEventNoDataEvent::~QTest1TestEventNoDataEvent()
{
}
QTest1TestMethodMethodRequest::QTest1TestMethodMethodRequest() : _message(new Tests::Test1TestMethodMethodRequest())
{
}
QTest1TestMethodMethodRequest::QTest1TestMethodMethodRequest(QSharedPointer<Tests::Test1TestMethodMethodRequest> message) : _message(message)
{
}
QTest1TestMethodMethodRequest::~QTest1TestMethodMethodRequest()
{
}
void QTest1TestMethodMethodRequest::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageRequest());
}
void QTest1TestMethodMethodRequest::setValue(custom::types::QTestMessageRequest* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageRequest* QTest1TestMethodMethodRequest::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageRequest();
	result->CopyFrom(val);
	return new custom::types::QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest>(result));
}
QTest1TestMethodMethodResponse::QTest1TestMethodMethodResponse() : _message(new Tests::Test1TestMethodMethodResponse())
{
}
QTest1TestMethodMethodResponse::QTest1TestMethodMethodResponse(QSharedPointer<Tests::Test1TestMethodMethodResponse> message) : _message(message)
{
}
QTest1TestMethodMethodResponse::~QTest1TestMethodMethodResponse()
{
}
void QTest1TestMethodMethodResponse::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1TestMethodMethodResponse::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1TestMethodMethodResponse::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1TestMethodSyncMethodRequest::QTest1TestMethodSyncMethodRequest() : _message(new Tests::Test1TestMethodSyncMethodRequest())
{
}
QTest1TestMethodSyncMethodRequest::QTest1TestMethodSyncMethodRequest(QSharedPointer<Tests::Test1TestMethodSyncMethodRequest> message) : _message(message)
{
}
QTest1TestMethodSyncMethodRequest::~QTest1TestMethodSyncMethodRequest()
{
}
void QTest1TestMethodSyncMethodRequest::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageRequest());
}
void QTest1TestMethodSyncMethodRequest::setValue(custom::types::QTestMessageRequest* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageRequest* QTest1TestMethodSyncMethodRequest::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageRequest();
	result->CopyFrom(val);
	return new custom::types::QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest>(result));
}
QTest1TestMethodSyncMethodResponse::QTest1TestMethodSyncMethodResponse() : _message(new Tests::Test1TestMethodSyncMethodResponse())
{
}
QTest1TestMethodSyncMethodResponse::QTest1TestMethodSyncMethodResponse(QSharedPointer<Tests::Test1TestMethodSyncMethodResponse> message) : _message(message)
{
}
QTest1TestMethodSyncMethodResponse::~QTest1TestMethodSyncMethodResponse()
{
}
void QTest1TestMethodSyncMethodResponse::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageResponse());
}
void QTest1TestMethodSyncMethodResponse::setValue(custom::types::QTestMessageResponse* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageResponse* QTest1TestMethodSyncMethodResponse::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageResponse();
	result->CopyFrom(val);
	return new custom::types::QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse>(result));
}
QTest1TestMethodWithNoResponseMethodRequest::QTest1TestMethodWithNoResponseMethodRequest() : _message(new Tests::Test1TestMethodWithNoResponseMethodRequest())
{
}
QTest1TestMethodWithNoResponseMethodRequest::QTest1TestMethodWithNoResponseMethodRequest(QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodRequest> message) : _message(message)
{
}
QTest1TestMethodWithNoResponseMethodRequest::~QTest1TestMethodWithNoResponseMethodRequest()
{
}
void QTest1TestMethodWithNoResponseMethodRequest::fillValue()
{
	_message->set_allocated_value(new custom::types::TestMessageRequest());
}
void QTest1TestMethodWithNoResponseMethodRequest::setValue(custom::types::QTestMessageRequest* val)
{
	if (val) { _message->set_allocated_value(val->getInnerMessage()); } else { _message->clear_value(); }
}
custom::types::QTestMessageRequest* QTest1TestMethodWithNoResponseMethodRequest::getValue()
{
	if(!_message->has_value()) { return nullptr; }
	auto val = _message->value();
	auto result = new custom::types::TestMessageRequest();
	result->CopyFrom(val);
	return new custom::types::QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest>(result));
}
QTest1TestMethodWithNoResponseMethodResponse::QTest1TestMethodWithNoResponseMethodResponse() : _message(new Tests::Test1TestMethodWithNoResponseMethodResponse())
{
}
QTest1TestMethodWithNoResponseMethodResponse::QTest1TestMethodWithNoResponseMethodResponse(QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodResponse> message) : _message(message)
{
}
QTest1TestMethodWithNoResponseMethodResponse::~QTest1TestMethodWithNoResponseMethodResponse()
{
}
QTest1TestMethodNoRequestMethodRequest::QTest1TestMethodNoRequestMethodRequest() : _message(new Tests::Test1TestMethodNoRequestMethodRequest())
{
}
QTest1TestMethodNoRequestMethodRequest::QTest1TestMethodNoRequestMethodRequest(QSharedPointer<Tests::Test1TestMethodNoRequestMethodRequest> message) : _message(message)
{
}
QTest1TestMethodNoRequestMethodRequest::~QTest1TestMethodNoRequestMethodRequest()
{
}
QTest1TestMethodNoRequestMethodResponse::QTest1TestMethodNoRequestMethodResponse() : _message(new Tests::Test1TestMethodNoRequestMethodResponse())
{
}
QTest1TestMethodNoRequestMethodResponse::QTest1TestMethodNoRequestMethodResponse(QSharedPointer<Tests::Test1TestMethodNoRequestMethodResponse> message) : _message(message)
{
}
QTest1TestMethodNoRequestMethodResponse::~QTest1TestMethodNoRequestMethodResponse()
{
}
