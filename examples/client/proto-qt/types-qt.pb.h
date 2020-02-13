#ifndef TYPESPROTO_H
#define TYPESPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "types.pb.h"
class QTestMessageRequest : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value2 READ getValue2 WRITE setValue2)
public:
	QTestMessageRequest();
	~QTestMessageRequest();
	void setValue2(QString val);
	QString getValue2();
private:
	QSharedPointer<custom::types::TestMessageRequest> _message;
};
class QTestMessageResponse : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value2 READ getValue2 WRITE setValue2)
public:
	QTestMessageResponse();
	~QTestMessageResponse();
	void setValue2(QString val);
	QString getValue2();
private:
	QSharedPointer<custom::types::TestMessageResponse> _message;
};
#endif // TYPESPROTO_H
