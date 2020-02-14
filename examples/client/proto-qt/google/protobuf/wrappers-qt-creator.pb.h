#ifndef GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
#include <QObject>
#include "google/protobuf/wrappers-qt.pb.h"
namespace google {
namespace protobuf {
class QGoogleProtobufWrappersCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufWrappersCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QDoubleValue* createDoubleValue()
	{
		return new QDoubleValue();
	}
	Q_INVOKABLE QFloatValue* createFloatValue()
	{
		return new QFloatValue();
	}
	Q_INVOKABLE QInt64Value* createInt64Value()
	{
		return new QInt64Value();
	}
	Q_INVOKABLE QUInt64Value* createUInt64Value()
	{
		return new QUInt64Value();
	}
	Q_INVOKABLE QInt32Value* createInt32Value()
	{
		return new QInt32Value();
	}
	Q_INVOKABLE QUInt32Value* createUInt32Value()
	{
		return new QUInt32Value();
	}
	Q_INVOKABLE QBoolValue* createBoolValue()
	{
		return new QBoolValue();
	}
	Q_INVOKABLE QStringValue* createStringValue()
	{
		return new QStringValue();
	}
	Q_INVOKABLE QBytesValue* createBytesValue()
	{
		return new QBytesValue();
	}
};
}
}
#endif // GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
