#ifndef GOOGLE_PROTOBUF_ANYPROTO_H
#define GOOGLE_PROTOBUF_ANYPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "google/protobuf/any.pb.h"
namespace google {
namespace protobuf {
class QAny : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString typeUrl READ getTypeUrl WRITE setTypeUrl)
public:
	QAny();
	~QAny();
	void setTypeUrl(QString val);
	QString getTypeUrl();
private:
	QSharedPointer<google::protobuf::Any> _message;
};
}
}
#endif // GOOGLE_PROTOBUF_ANYPROTO_H
