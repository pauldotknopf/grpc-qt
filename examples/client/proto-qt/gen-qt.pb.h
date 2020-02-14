#ifndef GENPROTO_H
#define GENPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "gen.pb.h"
namespace Tests {
class QTest1ListenEventStream : public QObject
{
	Q_OBJECT
public:
	QTest1ListenEventStream();
	~QTest1ListenEventStream();
private:
	QSharedPointer<Tests::Test1ListenEventStream> _message;
};
class QTest1CreateResponse : public QObject
{
	Q_OBJECT
public:
	QTest1CreateResponse();
	~QTest1CreateResponse();
private:
	QSharedPointer<Tests::Test1CreateResponse> _message;
};
class QTest1StopRequest : public QObject
{
	Q_OBJECT
public:
	QTest1StopRequest();
	~QTest1StopRequest();
private:
	QSharedPointer<Tests::Test1StopRequest> _message;
};
class QTest1StopResponse : public QObject
{
	Q_OBJECT
public:
	QTest1StopResponse();
	~QTest1StopResponse();
private:
	QSharedPointer<Tests::Test1StopResponse> _message;
};
class QTest1PropStringSetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringSetRequest();
	~QTest1PropStringSetRequest();
private:
	QSharedPointer<Tests::Test1PropStringSetRequest> _message;
};
class QTest1PropStringSetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringSetResponse();
	~QTest1PropStringSetResponse();
private:
	QSharedPointer<Tests::Test1PropStringSetResponse> _message;
};
class QTest1PropStringGetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringGetRequest();
	~QTest1PropStringGetRequest();
private:
	QSharedPointer<Tests::Test1PropStringGetRequest> _message;
};
class QTest1PropStringGetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringGetResponse();
	~QTest1PropStringGetResponse();
private:
	QSharedPointer<Tests::Test1PropStringGetResponse> _message;
};
class QTest1PropStringPropertyChanged : public QObject
{
	Q_OBJECT
public:
	QTest1PropStringPropertyChanged();
	~QTest1PropStringPropertyChanged();
private:
	QSharedPointer<Tests::Test1PropStringPropertyChanged> _message;
};
class QTest1PropComplexSetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexSetRequest();
	~QTest1PropComplexSetRequest();
private:
	QSharedPointer<Tests::Test1PropComplexSetRequest> _message;
};
class QTest1PropComplexSetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexSetResponse();
	~QTest1PropComplexSetResponse();
private:
	QSharedPointer<Tests::Test1PropComplexSetResponse> _message;
};
class QTest1PropComplexGetRequest : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexGetRequest();
	~QTest1PropComplexGetRequest();
private:
	QSharedPointer<Tests::Test1PropComplexGetRequest> _message;
};
class QTest1PropComplexGetResponse : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexGetResponse();
	~QTest1PropComplexGetResponse();
private:
	QSharedPointer<Tests::Test1PropComplexGetResponse> _message;
};
class QTest1PropComplexPropertyChanged : public QObject
{
	Q_OBJECT
public:
	QTest1PropComplexPropertyChanged();
	~QTest1PropComplexPropertyChanged();
private:
	QSharedPointer<Tests::Test1PropComplexPropertyChanged> _message;
};
class QTest1TestEventEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventEvent();
	~QTest1TestEventEvent();
private:
	QSharedPointer<Tests::Test1TestEventEvent> _message;
};
class QTest1TestEventComplexEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventComplexEvent();
	~QTest1TestEventComplexEvent();
private:
	QSharedPointer<Tests::Test1TestEventComplexEvent> _message;
};
class QTest1TestEventNoDataEvent : public QObject
{
	Q_OBJECT
public:
	QTest1TestEventNoDataEvent();
	~QTest1TestEventNoDataEvent();
private:
	QSharedPointer<Tests::Test1TestEventNoDataEvent> _message;
};
class QTest1TestMethodMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodMethodRequest();
	~QTest1TestMethodMethodRequest();
private:
	QSharedPointer<Tests::Test1TestMethodMethodRequest> _message;
};
class QTest1TestMethodMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodMethodResponse();
	~QTest1TestMethodMethodResponse();
private:
	QSharedPointer<Tests::Test1TestMethodMethodResponse> _message;
};
class QTest1TestMethodSyncMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodSyncMethodRequest();
	~QTest1TestMethodSyncMethodRequest();
private:
	QSharedPointer<Tests::Test1TestMethodSyncMethodRequest> _message;
};
class QTest1TestMethodSyncMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodSyncMethodResponse();
	~QTest1TestMethodSyncMethodResponse();
private:
	QSharedPointer<Tests::Test1TestMethodSyncMethodResponse> _message;
};
class QTest1TestMethodWithNoResponseMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodWithNoResponseMethodRequest();
	~QTest1TestMethodWithNoResponseMethodRequest();
private:
	QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodRequest> _message;
};
class QTest1TestMethodWithNoResponseMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodWithNoResponseMethodResponse();
	~QTest1TestMethodWithNoResponseMethodResponse();
private:
	QSharedPointer<Tests::Test1TestMethodWithNoResponseMethodResponse> _message;
};
class QTest1TestMethodNoRequestMethodRequest : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodNoRequestMethodRequest();
	~QTest1TestMethodNoRequestMethodRequest();
private:
	QSharedPointer<Tests::Test1TestMethodNoRequestMethodRequest> _message;
};
class QTest1TestMethodNoRequestMethodResponse : public QObject
{
	Q_OBJECT
public:
	QTest1TestMethodNoRequestMethodResponse();
	~QTest1TestMethodNoRequestMethodResponse();
private:
	QSharedPointer<Tests::Test1TestMethodNoRequestMethodResponse> _message;
};
}
#endif // GENPROTO_H
