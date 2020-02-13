#ifndef GOOGLE_PROTOBUF_WRAPPERSPROTO_H
#define GOOGLE_PROTOBUF_WRAPPERSPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "google/protobuf/wrappers.pb.h"
class QDoubleValue : public QObject
{
	Q_OBJECT
public:
	QDoubleValue();
	~QDoubleValue();
private:
	QSharedPointer<google::protobuf::DoubleValue> _message;
};
class QFloatValue : public QObject
{
	Q_OBJECT
public:
	QFloatValue();
	~QFloatValue();
private:
	QSharedPointer<google::protobuf::FloatValue> _message;
};
class QInt64Value : public QObject
{
	Q_OBJECT
public:
	QInt64Value();
	~QInt64Value();
private:
	QSharedPointer<google::protobuf::Int64Value> _message;
};
class QUInt64Value : public QObject
{
	Q_OBJECT
public:
	QUInt64Value();
	~QUInt64Value();
private:
	QSharedPointer<google::protobuf::UInt64Value> _message;
};
class QInt32Value : public QObject
{
	Q_OBJECT
public:
	QInt32Value();
	~QInt32Value();
private:
	QSharedPointer<google::protobuf::Int32Value> _message;
};
class QUInt32Value : public QObject
{
	Q_OBJECT
public:
	QUInt32Value();
	~QUInt32Value();
private:
	QSharedPointer<google::protobuf::UInt32Value> _message;
};
class QBoolValue : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool value READ getValue WRITE setValue)
public:
	QBoolValue();
	~QBoolValue();
	void setValue(bool val);
	bool getValue();
private:
	QSharedPointer<google::protobuf::BoolValue> _message;
};
class QStringValue : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value READ getValue WRITE setValue)
public:
	QStringValue();
	~QStringValue();
	void setValue(QString val);
	QString getValue();
private:
	QSharedPointer<google::protobuf::StringValue> _message;
};
class QBytesValue : public QObject
{
	Q_OBJECT
public:
	QBytesValue();
	~QBytesValue();
private:
	QSharedPointer<google::protobuf::BytesValue> _message;
};
#endif // GOOGLE_PROTOBUF_WRAPPERSPROTO_H
