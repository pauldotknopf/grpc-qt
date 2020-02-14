#ifndef TYPESPROTO_H
#define TYPESPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "types.pb.h"
namespace custom {
namespace types {
class QTestMessageRequest;
class QTestMessageResponse;
class QTestMessageRequest : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value2 READ getValue2 WRITE setValue2)
public:
	QTestMessageRequest();
	QTestMessageRequest(QSharedPointer<custom::types::TestMessageRequest> message);
	~QTestMessageRequest();
	void setValue2(QString val);
	QString getValue2();
	custom::types::TestMessageRequest* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<custom::types::TestMessageRequest> _message;
};
class QTestMessageResponse : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value2 READ getValue2 WRITE setValue2)
public:
	QTestMessageResponse();
	QTestMessageResponse(QSharedPointer<custom::types::TestMessageResponse> message);
	~QTestMessageResponse();
	void setValue2(QString val);
	QString getValue2();
	custom::types::TestMessageResponse* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<custom::types::TestMessageResponse> _message;
};
}
}
#endif // TYPESPROTO_H
