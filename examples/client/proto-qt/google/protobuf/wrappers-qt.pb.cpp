#include "google/protobuf/wrappers-qt.pb.h"
QDoubleValue::QDoubleValue() : _message(new google::protobuf::DoubleValue())
{
}
QDoubleValue::~QDoubleValue()
{
}
QFloatValue::QFloatValue() : _message(new google::protobuf::FloatValue())
{
}
QFloatValue::~QFloatValue()
{
}
QInt64Value::QInt64Value() : _message(new google::protobuf::Int64Value())
{
}
QInt64Value::~QInt64Value()
{
}
QUInt64Value::QUInt64Value() : _message(new google::protobuf::UInt64Value())
{
}
QUInt64Value::~QUInt64Value()
{
}
QInt32Value::QInt32Value() : _message(new google::protobuf::Int32Value())
{
}
QInt32Value::~QInt32Value()
{
}
QUInt32Value::QUInt32Value() : _message(new google::protobuf::UInt32Value())
{
}
QUInt32Value::~QUInt32Value()
{
}
QBoolValue::QBoolValue() : _message(new google::protobuf::BoolValue())
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
QBytesValue::~QBytesValue()
{
}
