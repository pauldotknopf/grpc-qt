#ifndef GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
#include <QObject>
#include <QVariant>
#include "google/protobuf/wrappers-qt.pb.h"
namespace google {
namespace protobuf {
class QGoogleProtobufWrappersCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufWrappersCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QVariant createDoubleValue()
	{
		return QVariant::fromValue(new QDoubleValue());
	}
	Q_INVOKABLE QVariant createFloatValue()
	{
		return QVariant::fromValue(new QFloatValue());
	}
	Q_INVOKABLE QVariant createInt64Value()
	{
		return QVariant::fromValue(new QInt64Value());
	}
	Q_INVOKABLE QVariant createUInt64Value()
	{
		return QVariant::fromValue(new QUInt64Value());
	}
	Q_INVOKABLE QVariant createInt32Value()
	{
		return QVariant::fromValue(new QInt32Value());
	}
	Q_INVOKABLE QVariant createUInt32Value()
	{
		return QVariant::fromValue(new QUInt32Value());
	}
	Q_INVOKABLE QVariant createBoolValue()
	{
		return QVariant::fromValue(new QBoolValue());
	}
	Q_INVOKABLE QVariant createStringValue()
	{
		return QVariant::fromValue(new QStringValue());
	}
	Q_INVOKABLE QVariant createBytesValue()
	{
		return QVariant::fromValue(new QBytesValue());
	}
};
}
}
#endif // GOOGLE_PROTOBUF_WRAPPERSPROTO_H_CREATOR
