#ifndef GOOGLE_PROTOBUF_WRAPPERSPROTO_H
#define GOOGLE_PROTOBUF_WRAPPERSPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "google/protobuf/wrappers.pb.h"
namespace google {
namespace protobuf {
class QDoubleValue;
class QFloatValue;
class QInt64Value;
class QUInt64Value;
class QInt32Value;
class QUInt32Value;
class QBoolValue;
class QStringValue;
class QBytesValue;
class QDoubleValue : public QObject
{
	Q_OBJECT
public:
	QDoubleValue();
	QDoubleValue(QSharedPointer<google::protobuf::DoubleValue> message);
	~QDoubleValue();
	google::protobuf::DoubleValue* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::DoubleValue> _message;
};
class QFloatValue : public QObject
{
	Q_OBJECT
public:
	QFloatValue();
	QFloatValue(QSharedPointer<google::protobuf::FloatValue> message);
	~QFloatValue();
	google::protobuf::FloatValue* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::FloatValue> _message;
};
class QInt64Value : public QObject
{
	Q_OBJECT
public:
	QInt64Value();
	QInt64Value(QSharedPointer<google::protobuf::Int64Value> message);
	~QInt64Value();
	google::protobuf::Int64Value* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::Int64Value> _message;
};
class QUInt64Value : public QObject
{
	Q_OBJECT
public:
	QUInt64Value();
	QUInt64Value(QSharedPointer<google::protobuf::UInt64Value> message);
	~QUInt64Value();
	google::protobuf::UInt64Value* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::UInt64Value> _message;
};
class QInt32Value : public QObject
{
	Q_OBJECT
public:
	QInt32Value();
	QInt32Value(QSharedPointer<google::protobuf::Int32Value> message);
	~QInt32Value();
	google::protobuf::Int32Value* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::Int32Value> _message;
};
class QUInt32Value : public QObject
{
	Q_OBJECT
public:
	QUInt32Value();
	QUInt32Value(QSharedPointer<google::protobuf::UInt32Value> message);
	~QUInt32Value();
	google::protobuf::UInt32Value* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::UInt32Value> _message;
};
class QBoolValue : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool value READ getValue WRITE setValue)
public:
	QBoolValue();
	QBoolValue(QSharedPointer<google::protobuf::BoolValue> message);
	~QBoolValue();
	void setValue(bool val);
	bool getValue();
	google::protobuf::BoolValue* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::BoolValue> _message;
};
class QStringValue : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString value READ getValue WRITE setValue)
public:
	QStringValue();
	QStringValue(QSharedPointer<google::protobuf::StringValue> message);
	~QStringValue();
	void setValue(QString val);
	QString getValue();
	google::protobuf::StringValue* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::StringValue> _message;
};
class QBytesValue : public QObject
{
	Q_OBJECT
public:
	QBytesValue();
	QBytesValue(QSharedPointer<google::protobuf::BytesValue> message);
	~QBytesValue();
	google::protobuf::BytesValue* getInnerMessage()
	{
		return _message.data();
	}
private:
	QSharedPointer<google::protobuf::BytesValue> _message;
};
}
}
#endif // GOOGLE_PROTOBUF_WRAPPERSPROTO_H
