#ifndef GOOGLE_PROTOBUF_ANYPROTO_H
#define GOOGLE_PROTOBUF_ANYPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "google/protobuf/any.pb.h"
namespace google {
namespace protobuf {
class QAny;
class QAny : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString typeUrl READ getTypeUrl WRITE setTypeUrl)
public:
	QAny();
	QAny(QSharedPointer<google::protobuf::Any> message);
	~QAny();
	void setTypeUrl(QString val);
	QString getTypeUrl();
	google::protobuf::Any* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::Any> _message;
};
}
}
#endif // GOOGLE_PROTOBUF_ANYPROTO_H
