#ifndef TYPESPROTO_H_CREATOR
#define TYPESPROTO_H_CREATOR
#include <QObject>
#include <QVariant>
#include "types-qt.pb.h"
namespace custom {
namespace types {
class QTypesCreator : public QObject {
	Q_OBJECT
public:
	QTypesCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QVariant createTestMessageRequest()
	{
		return QVariant::fromValue(new QTestMessageRequest());
	}
	Q_INVOKABLE QVariant createTestMessageResponse()
	{
		return QVariant::fromValue(new QTestMessageResponse());
	}
};
}
}
#endif // TYPESPROTO_H_CREATOR
