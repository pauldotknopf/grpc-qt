#include "google/protobuf/wrappers-qt.pb.h"
using namespace google::protobuf;
QDoubleValue::QDoubleValue() : _message(new google::protobuf::DoubleValue())
{
}
QDoubleValue::QDoubleValue(QSharedPointer<google::protobuf::DoubleValue> message) : _message(message)
{
}
QDoubleValue::~QDoubleValue()
{
}
QFloatValue::QFloatValue() : _message(new google::protobuf::FloatValue())
{
}
QFloatValue::QFloatValue(QSharedPointer<google::protobuf::FloatValue> message) : _message(message)
{
}
QFloatValue::~QFloatValue()
{
}
QInt64Value::QInt64Value() : _message(new google::protobuf::Int64Value())
{
}
QInt64Value::QInt64Value(QSharedPointer<google::protobuf::Int64Value> message) : _message(message)
{
}
QInt64Value::~QInt64Value()
{
}
QUInt64Value::QUInt64Value() : _message(new google::protobuf::UInt64Value())
{
}
QUInt64Value::QUInt64Value(QSharedPointer<google::protobuf::UInt64Value> message) : _message(message)
{
}
QUInt64Value::~QUInt64Value()
{
}
QInt32Value::QInt32Value() : _message(new google::protobuf::Int32Value())
{
}
QInt32Value::QInt32Value(QSharedPointer<google::protobuf::Int32Value> message) : _message(message)
{
}
QInt32Value::~QInt32Value()
{
}
QUInt32Value::QUInt32Value() : _message(new google::protobuf::UInt32Value())
{
}
QUInt32Value::QUInt32Value(QSharedPointer<google::protobuf::UInt32Value> message) : _message(message)
{
}
QUInt32Value::~QUInt32Value()
{
}
QBoolValue::QBoolValue() : _message(new google::protobuf::BoolValue())
{
}
QBoolValue::QBoolValue(QSharedPointer<google::protobuf::BoolValue> message) : _message(message)
{
}
QBoolValue::~QBoolValue()
{
}
void QBoolValue::setValue(bool val)
{
	_message->set_value(val);
}
bool QBoolValue::getValue()
{
	return _message->value();
}
QStringValue::QStringValue() : _message(new google::protobuf::StringValue())
{
}
QStringValue::QStringValue(QSharedPointer<google::protobuf::StringValue> message) : _message(message)
{
}
QStringValue::~QStringValue()
{
}
void QStringValue::setValue(QString val)
{
	_message->set_value(val.toStdString());
}
QString QStringValue::getValue()
{
	return QString::fromStdString(_message->value());
}
QBytesValue::QBytesValue() : _message(new google::protobuf::BytesValue())
{
}
QBytesValue::QBytesValue(QSharedPointer<google::protobuf::BytesValue> message) : _message(message)
{
}
QBytesValue::~QBytesValue()
{
}
