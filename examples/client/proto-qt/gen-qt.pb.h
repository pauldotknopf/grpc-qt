#ifndef GENPROTO_H
#define GENPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "gen.pb.h"
#include "google/protobuf/wrappers-qt.pb.h"
#include "types-qt.pb.h"
namespace Tests {
class QTest1ListenEventStream;
class QTest1CreateResponse;
class QTest1StopRequest;
class QTest1StopResponse;
class QTest1PropStringSetRequest;
class QTest1PropStringSetResponse;
class QTest1PropStringGetRequest;
class QTest1PropStringGetResponse;
class QTest1PropStringPropertyChanged;
class QTest1PropComplexSetRequest;
class QTest1PropComplexSetResponse;
class QTest1PropComplexGetRequest;
class QTest1PropComplexGetResponse;
class QTest1PropComplexPropertyChanged;
class QTest1TestEventEvent;
class QTest1TestEventComplexEvent;
class QTest1TestEventNoDataEvent;
class QTest1TestMethodMethodRequest;
class QTest1TestMethodMethodResponse;
class QTest1TestMethodSyncMethodRequest;
class QTest1TestMethodSyncMethodResponse;
class QTest1TestMethodWithNoResponseMethodRequest;
class QTest1TestMethodWithNoResponseMethodResponse;
class QTest1TestMethodNoRequestMethodRequest;
class QTest1TestMethodNoRequestMethodResponse;
class QTest1ListenEventStream : public QObject
{
	Q_OBJECT
public:
	QTest1ListenEventStream();
	QTest1ListenEventStream(QSharedPointer<Tests::Test1ListenEventStream> message);
	~QTest1ListenEventStream();
	Tests::Test1ListenEventStream* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1ListenEventStream> _message;
};
class QTest1CreateResponse : public QObject
{
	Q_OBJECT
public:
	QTest1CreateResponse();
	QTest1CreateResponse(QSharedPointer<Tests::Test1CreateResponse> message);
	~QTest1CreateResponse();
	Tests::Test1CreateResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1CreateResponse> _message;
};
class QTest1StopRequest : public QObject
{
	Q_OBJECT
public:
	QTest1StopRequest();
	QTest1StopRequest(QSharedPointer<Tests::Test1StopRequest> message);
	~QTest1StopRequest();
	Tests::Test1StopRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1StopRequest> _message;
};
class QTest1StopResponse : public QObject
{
	Q_OBJECT
public:
	QTest1StopResponse();
	QTest1StopResponse(QSharedPointer<Tests::Test1StopResponse> message);
	~QTest1StopResponse();
	Tests::Test1StopResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1StopResponse> _message;
};
class QTest1PropStringSetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringSetRequest();
	QTest1PropStringSetRequest(QSharedPointer<Tests::Test1PropStringSetRequest> message);
	~QTest1PropStringSetRequest();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(google::protobuf::QStringValue* val);
	Q_INVOKABLE google::protobuf::QStringValue* getValue();
	Tests::Test1PropStringSetRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropStringSetRequest> _message;
};
class QTest1PropStringSetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringSetResponse();
	QTest1PropStringSetResponse(QSharedPointer<Tests::Test1PropStringSetResponse> message);
	~QTest1PropStringSetResponse();
	Tests::Test1PropStringSetResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropStringSetResponse> _message;
};
class QTest1PropStringGetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringGetRequest();
	QTest1PropStringGetRequest(QSharedPointer<Tests::Test1PropStringGetRequest> message);
	~QTest1PropStringGetRequest();
	Tests::Test1PropStringGetRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropStringGetRequest> _message;
};
class QTest1PropStringGetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringGetResponse();
	QTest1PropStringGetResponse(QSharedPointer<Tests::Test1PropStringGetResponse> message);
	~QTest1PropStringGetResponse();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(google::protobuf::QStringValue* val);
	Q_INVOKABLE google::protobuf::QStringValue* getValue();
	Tests::Test1PropStringGetResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropStringGetResponse> _message;
};
class QTest1PropStringPropertyChanged : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringPropertyChanged();
	QTest1PropStringPropertyChanged(QSharedPointer<Tests::Test1PropStringPropertyChanged> message);
	~QTest1PropStringPropertyChanged();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(google::protobuf::QStringValue* val);
	Q_INVOKABLE google::protobuf::QStringValue* getValue();
	Tests::Test1PropStringPropertyChanged* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropStringPropertyChanged> _message;
};
class QTest1PropComplexSetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexSetRequest();
	QTest1PropComplexSetRequest(QSharedPointer<Tests::Test1PropComplexSetRequest> message);
	~QTest1PropComplexSetRequest();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1PropComplexSetRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropComplexSetRequest> _message;
};
class QTest1PropComplexSetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexSetResponse();
	QTest1PropComplexSetResponse(QSharedPointer<Tests::Test1PropComplexSetResponse> message);
	~QTest1PropComplexSetResponse();
	Tests::Test1PropComplexSetResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropComplexSetResponse> _message;
};
class QTest1PropComplexGetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexGetRequest();
	QTest1PropComplexGetRequest(QSharedPointer<Tests::Test1PropComplexGetRequest> message);
	~QTest1PropComplexGetRequest();
	Tests::Test1PropComplexGetRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropComplexGetRequest> _message;
};
class QTest1PropComplexGetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexGetResponse();
	QTest1PropComplexGetResponse(QSharedPointer<Tests::Test1PropComplexGetResponse> message);
	~QTest1PropComplexGetResponse();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1PropComplexGetResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropComplexGetResponse> _message;
};
class QTest1PropComplexPropertyChanged : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexPropertyChanged();
	QTest1PropComplexPropertyChanged(QSharedPointer<Tests::Test1PropComplexPropertyChanged> message);
	~QTest1PropComplexPropertyChanged();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1PropComplexPropertyChanged* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1PropComplexPropertyChanged> _message;
};
class QTest1TestEventEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventEvent();
	QTest1TestEventEvent(QSharedPointer<Tests::Test1TestEventEvent> message);
	~QTest1TestEventEvent();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(google::protobuf::QStringValue* val);
	Q_INVOKABLE google::protobuf::QStringValue* getValue();
	Tests::Test1TestEventEvent* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestEventEvent> _message;
};
class QTest1TestEventComplexEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventComplexEvent();
	QTest1TestEventComplexEvent(QSharedPointer<Tests::Test1TestEventComplexEvent> message);
	~QTest1TestEventComplexEvent();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1TestEventComplexEvent* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestEventComplexEvent> _message;
};
class QTest1TestEventNoDataEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventNoDataEvent();
	QTest1TestEventNoDataEvent(QSharedPointer<Tests::Test1TestEventNoDataEvent> message);
	~QTest1TestEventNoDataEvent();
	Tests::Test1TestEventNoDataEvent* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestEventNoDataEvent> _message;
};
class QTest1TestMethodMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodMethodRequest();
	QTest1TestMethodMethodRequest(QSharedPointer<Tests::Test1TestMethodMethodRequest> message);
	~QTest1TestMethodMethodRequest();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageRequest* val);
	Q_INVOKABLE custom::types::QTestMessageRequest* getValue();
	Tests::Test1TestMethodMethodRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodMethodRequest> _message;
};
class QTest1TestMethodMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodMethodResponse();
	QTest1TestMethodMethodResponse(QSharedPointer<Tests::Test1TestMethodMethodResponse> message);
	~QTest1TestMethodMethodResponse();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1TestMethodMethodResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodMethodResponse> _message;
};
class QTest1TestMethodSyncMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodSyncMethodRequest();
	QTest1TestMethodSyncMethodRequest(QSharedPointer<Tests::Test1TestMethodSyncMethodRequest> message);
	~QTest1TestMethodSyncMethodRequest();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageRequest* val);
	Q_INVOKABLE custom::types::QTestMessageRequest* getValue();
	Tests::Test1TestMethodSyncMethodRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodSyncMethodRequest> _message;
};
class QTest1TestMethodSyncMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodSyncMethodResponse();
	QTest1TestMethodSyncMethodResponse(QSharedPointer<Tests::Test1TestMethodSyncMethodResponse> message);
	~QTest1TestMethodSyncMethodResponse();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageResponse* val);
	Q_INVOKABLE custom::types::QTestMessageResponse* getValue();
	Tests::Test1TestMethodSyncMethodResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodSyncMethodResponse> _message;
};
class QTest1TestMethodWithNoResponseMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodWithNoResponseMethodRequest();
	QTest1TestMethodWithNoResponseMethodRequest(QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodRequest> message);
	~QTest1TestMethodWithNoResponseMethodRequest();
	Q_INVOKABLE void fillValue();
	Q_INVOKABLE void setValue(custom::types::QTestMessageRequest* val);
	Q_INVOKABLE custom::types::QTestMessageRequest* getValue();
	Tests::Test1TestMethodWithNoResponseMethodRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodRequest> _message;
};
class QTest1TestMethodWithNoResponseMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodWithNoResponseMethodResponse();
	QTest1TestMethodWithNoResponseMethodResponse(QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodResponse> message);
	~QTest1TestMethodWithNoResponseMethodResponse();
	Tests::Test1TestMethodWithNoResponseMethodResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodResponse> _message;
};
class QTest1TestMethodNoRequestMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodNoRequestMethodRequest();
	QTest1TestMethodNoRequestMethodRequest(QSharedPointer<Tests::Test1TestMethodNoRequestMethodRequest> message);
	~QTest1TestMethodNoRequestMethodRequest();
	Tests::Test1TestMethodNoRequestMethodRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodNoRequestMethodRequest> _message;
};
class QTest1TestMethodNoRequestMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodNoRequestMethodResponse();
	QTest1TestMethodNoRequestMethodResponse(QSharedPointer<Tests::Test1TestMethodNoRequestMethodResponse> message);
	~QTest1TestMethodNoRequestMethodResponse();
	Tests::Test1TestMethodNoRequestMethodResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<Tests::Test1TestMethodNoRequestMethodResponse> _message;
};
}
#endif // GENPROTO_H
