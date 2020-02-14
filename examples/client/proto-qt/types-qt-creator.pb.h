#ifndef TYPESPROTO_H_CREATOR
#define TYPESPROTO_H_CREATOR
#include <QObject>
#include "types-qt.pb.h"
namespace custom {
namespace types {
class QTypesCreator : public QObject {
	Q_OBJECT
public:
	QTypesCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QTestMessageRequest* createTestMessageRequest()
	{
		return new QTestMessageRequest();
	}
	Q_INVOKABLE QTestMessageResponse* createTestMessageResponse()
	{
		return new QTestMessageResponse();
	}
};
}
}
#endif // TYPESPROTO_H_CREATOR
