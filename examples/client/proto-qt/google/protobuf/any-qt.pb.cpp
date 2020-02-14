#include "google/protobuf/any-qt.pb.h"
using namespace google::protobuf;
QAny::QAny() : _message(new google::protobuf::Any())
{
}
QAny::~QAny()
{
}
void QAny::setTypeUrl(QString val)
{
	_message->set_type_url(val.toStdString());
}
QString QAny::getTypeUrl()
{
	return QString::fromStdString(_message->type_url());
}
