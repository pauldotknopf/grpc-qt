#ifndef GENPROTO_H_CREATOR
#define GENPROTO_H_CREATOR
#include <QObject>
#include <QVariant>
#include "gen-qt.pb.h"
namespace Tests {
class QGenCreator : public QObject {
	Q_OBJECT
public:
	QGenCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QVariant createTest1ListenEventStream()
	{
		return QVariant::fromValue(new QTest1ListenEventStream());
	}
	Q_INVOKABLE QVariant createTest1CreateResponse()
	{
		return QVariant::fromValue(new QTest1CreateResponse());
	}
	Q_INVOKABLE QVariant createTest1StopRequest()
	{
		return QVariant::fromValue(new QTest1StopRequest());
	}
	Q_INVOKABLE QVariant createTest1StopResponse()
	{
		return QVariant::fromValue(new QTest1StopResponse());
	}
	Q_INVOKABLE QVariant createTest1PropStringSetRequest()
	{
		return QVariant::fromValue(new QTest1PropStringSetRequest());
	}
	Q_INVOKABLE QVariant createTest1PropStringSetResponse()
	{
		return QVariant::fromValue(new QTest1PropStringSetResponse());
	}
	Q_INVOKABLE QVariant createTest1PropStringGetRequest()
	{
		return QVariant::fromValue(new QTest1PropStringGetRequest());
	}
	Q_INVOKABLE QVariant createTest1PropStringGetResponse()
	{
		return QVariant::fromValue(new QTest1PropStringGetResponse());
	}
	Q_INVOKABLE QVariant createTest1PropStringPropertyChanged()
	{
		return QVariant::fromValue(new QTest1PropStringPropertyChanged());
	}
	Q_INVOKABLE QVariant createTest1PropComplexSetRequest()
	{
		return QVariant::fromValue(new QTest1PropComplexSetRequest());
	}
	Q_INVOKABLE QVariant createTest1PropComplexSetResponse()
	{
		return QVariant::fromValue(new QTest1PropComplexSetResponse());
	}
	Q_INVOKABLE QVariant createTest1PropComplexGetRequest()
	{
		return QVariant::fromValue(new QTest1PropComplexGetRequest());
	}
	Q_INVOKABLE QVariant createTest1PropComplexGetResponse()
	{
		return QVariant::fromValue(new QTest1PropComplexGetResponse());
	}
	Q_INVOKABLE QVariant createTest1PropComplexPropertyChanged()
	{
		return QVariant::fromValue(new QTest1PropComplexPropertyChanged());
	}
	Q_INVOKABLE QVariant createTest1TestEventEvent()
	{
		return QVariant::fromValue(new QTest1TestEventEvent());
	}
	Q_INVOKABLE QVariant createTest1TestEventComplexEvent()
	{
		return QVariant::fromValue(new QTest1TestEventComplexEvent());
	}
	Q_INVOKABLE QVariant createTest1TestEventNoDataEvent()
	{
		return QVariant::fromValue(new QTest1TestEventNoDataEvent());
	}
	Q_INVOKABLE QVariant createTest1TestMethodMethodRequest()
	{
		return QVariant::fromValue(new QTest1TestMethodMethodRequest());
	}
	Q_INVOKABLE QVariant createTest1TestMethodMethodResponse()
	{
		return QVariant::fromValue(new QTest1TestMethodMethodResponse());
	}
	Q_INVOKABLE QVariant createTest1TestMethodSyncMethodRequest()
	{
		return QVariant::fromValue(new QTest1TestMethodSyncMethodRequest());
	}
	Q_INVOKABLE QVariant createTest1TestMethodSyncMethodResponse()
	{
		return QVariant::fromValue(new QTest1TestMethodSyncMethodResponse());
	}
	Q_INVOKABLE QVariant createTest1TestMethodWithNoResponseMethodRequest()
	{
		return QVariant::fromValue(new QTest1TestMethodWithNoResponseMethodRequest());
	}
	Q_INVOKABLE QVariant createTest1TestMethodWithNoResponseMethodResponse()
	{
		return QVariant::fromValue(new QTest1TestMethodWithNoResponseMethodResponse());
	}
	Q_INVOKABLE QVariant createTest1TestMethodNoRequestMethodRequest()
	{
		return QVariant::fromValue(new QTest1TestMethodNoRequestMethodRequest());
	}
	Q_INVOKABLE QVariant createTest1TestMethodNoRequestMethodResponse()
	{
		return QVariant::fromValue(new QTest1TestMethodNoRequestMethodResponse());
	}
};
}
#endif // GENPROTO_H_CREATOR
