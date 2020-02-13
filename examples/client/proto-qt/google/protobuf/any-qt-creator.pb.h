#ifndef GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
#include <QObject>
#include "google/protobuf/any-qt.pb.h"
class QGoogleProtobufAnyCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufAnyCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QAny* createAny()
	{
		return new QAny();
	}
};
#endif // GOOGLE_PROTOBUF_ANYPROTO_H_CREATOR
