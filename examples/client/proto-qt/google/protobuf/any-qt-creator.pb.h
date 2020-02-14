#ifndef GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
#include <QObject>
#include <QVariant>
#include "google/protobuf/any-qt.pb.h"
namespace google {
namespace protobuf {
class QGoogleProtobufAnyCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufAnyCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QVariant createAny()
	{
		return QVariant::fromValue(new QAny());
	}
};
}
}
#endif // GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
