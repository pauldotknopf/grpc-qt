#ifndef GENPROTO_H_CREATOR
#define GENPROTO_H_CREATOR
#include <QObject>
#include "gen-qt.pb.h"
namespace Tests {
class QGenCreator : public QObject {
	Q_OBJECT
public:
	QGenCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QTest1ListenEventStream* createTest1ListenEventStream()
	{
		return new QTest1ListenEventStream();
	}
	Q_INVOKABLE QTest1CreateResponse* createTest1CreateResponse()
	{
		return new QTest1CreateResponse();
	}
	Q_INVOKABLE QTest1StopRequest* createTest1StopRequest()
	{
		return new QTest1StopRequest();
	}
	Q_INVOKABLE QTest1StopResponse* createTest1StopResponse()
	{
		return new QTest1StopResponse();
	}
	Q_INVOKABLE QTest1PropStringSetRequest* createTest1PropStringSetRequest()
	{
		return new QTest1PropStringSetRequest();
	}
	Q_INVOKABLE QTest1PropStringSetResponse* createTest1PropStringSetResponse()
	{
		return new QTest1PropStringSetResponse();
	}
	Q_INVOKABLE QTest1PropStringGetRequest* createTest1PropStringGetRequest()
	{
		return new QTest1PropStringGetRequest();
	}
	Q_INVOKABLE QTest1PropStringGetResponse* createTest1PropStringGetResponse()
	{
		return new QTest1PropStringGetResponse();
	}
	Q_INVOKABLE QTest1PropStringPropertyChanged* createTest1PropStringPropertyChanged()
	{
		return new QTest1PropStringPropertyChanged();
	}
	Q_INVOKABLE QTest1PropComplexSetRequest* createTest1PropComplexSetRequest()
	{
		return new QTest1PropComplexSetRequest();
	}
	Q_INVOKABLE QTest1PropComplexSetResponse* createTest1PropComplexSetResponse()
	{
		return new QTest1PropComplexSetResponse();
	}
	Q_INVOKABLE QTest1PropComplexGetRequest* createTest1PropComplexGetRequest()
	{
		return new QTest1PropComplexGetRequest();
	}
	Q_INVOKABLE QTest1PropComplexGetResponse* createTest1PropComplexGetResponse()
	{
		return new QTest1PropComplexGetResponse();
	}
	Q_INVOKABLE QTest1PropComplexPropertyChanged* createTest1PropComplexPropertyChanged()
	{
		return new QTest1PropComplexPropertyChanged();
	}
	Q_INVOKABLE QTest1TestEventEvent* createTest1TestEventEvent()
	{
		return new QTest1TestEventEvent();
	}
	Q_INVOKABLE QTest1TestEventComplexEvent* createTest1TestEventComplexEvent()
	{
		return new QTest1TestEventComplexEvent();
	}
	Q_INVOKABLE QTest1TestEventNoDataEvent* createTest1TestEventNoDataEvent()
	{
		return new QTest1TestEventNoDataEvent();
	}
	Q_INVOKABLE QTest1TestMethodMethodRequest* createTest1TestMethodMethodRequest()
	{
		return new QTest1TestMethodMethodRequest();
	}
	Q_INVOKABLE QTest1TestMethodMethodResponse* createTest1TestMethodMethodResponse()
	{
		return new QTest1TestMethodMethodResponse();
	}
	Q_INVOKABLE QTest1TestMethodSyncMethodRequest* createTest1TestMethodSyncMethodRequest()
	{
		return new QTest1TestMethodSyncMethodRequest();
	}
	Q_INVOKABLE QTest1TestMethodSyncMethodResponse* createTest1TestMethodSyncMethodResponse()
	{
		return new QTest1TestMethodSyncMethodResponse();
	}
	Q_INVOKABLE QTest1TestMethodWithNoResponseMethodRequest* createTest1TestMethodWithNoResponseMethodRequest()
	{
		return new QTest1TestMethodWithNoResponseMethodRequest();
	}
	Q_INVOKABLE QTest1TestMethodWithNoResponseMethodResponse* createTest1TestMethodWithNoResponseMethodResponse()
	{
		return new QTest1TestMethodWithNoResponseMethodResponse();
	}
	Q_INVOKABLE QTest1TestMethodNoRequestMethodRequest* createTest1TestMethodNoRequestMethodRequest()
	{
		return new QTest1TestMethodNoRequestMethodRequest();
	}
	Q_INVOKABLE QTest1TestMethodNoRequestMethodResponse* createTest1TestMethodNoRequestMethodResponse()
	{
		return new QTest1TestMethodNoRequestMethodResponse();
	}
};
}
#endif // GENPROTO_H_CREATOR
