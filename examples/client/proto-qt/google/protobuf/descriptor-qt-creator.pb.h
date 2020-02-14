#ifndef GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
#include <QObject>
#include <QVariant>
#include "google/protobuf/descriptor-qt.pb.h"
namespace google {
namespace protobuf {
class QGoogleProtobufDescriptorCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufDescriptorCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QVariant createFileDescriptorSet()
	{
		return QVariant::fromValue(new QFileDescriptorSet());
	}
	Q_INVOKABLE QVariant createFileDescriptorProto()
	{
		return QVariant::fromValue(new QFileDescriptorProto());
	}
	Q_INVOKABLE QVariant createDescriptorProto()
	{
		return QVariant::fromValue(new QDescriptorProto());
	}
	Q_INVOKABLE QVariant createExtensionRangeOptions()
	{
		return QVariant::fromValue(new QExtensionRangeOptions());
	}
	Q_INVOKABLE QVariant createFieldDescriptorProto()
	{
		return QVariant::fromValue(new QFieldDescriptorProto());
	}
	Q_INVOKABLE QVariant createOneofDescriptorProto()
	{
		return QVariant::fromValue(new QOneofDescriptorProto());
	}
	Q_INVOKABLE QVariant createEnumDescriptorProto()
	{
		return QVariant::fromValue(new QEnumDescriptorProto());
	}
	Q_INVOKABLE QVariant createEnumValueDescriptorProto()
	{
		return QVariant::fromValue(new QEnumValueDescriptorProto());
	}
	Q_INVOKABLE QVariant createServiceDescriptorProto()
	{
		return QVariant::fromValue(new QServiceDescriptorProto());
	}
	Q_INVOKABLE QVariant createMethodDescriptorProto()
	{
		return QVariant::fromValue(new QMethodDescriptorProto());
	}
	Q_INVOKABLE QVariant createFileOptions()
	{
		return QVariant::fromValue(new QFileOptions());
	}
	Q_INVOKABLE QVariant createMessageOptions()
	{
		return QVariant::fromValue(new QMessageOptions());
	}
	Q_INVOKABLE QVariant createFieldOptions()
	{
		return QVariant::fromValue(new QFieldOptions());
	}
	Q_INVOKABLE QVariant createOneofOptions()
	{
		return QVariant::fromValue(new QOneofOptions());
	}
	Q_INVOKABLE QVariant createEnumOptions()
	{
		return QVariant::fromValue(new QEnumOptions());
	}
	Q_INVOKABLE QVariant createEnumValueOptions()
	{
		return QVariant::fromValue(new QEnumValueOptions());
	}
	Q_INVOKABLE QVariant createServiceOptions()
	{
		return QVariant::fromValue(new QServiceOptions());
	}
	Q_INVOKABLE QVariant createMethodOptions()
	{
		return QVariant::fromValue(new QMethodOptions());
	}
	Q_INVOKABLE QVariant createUninterpretedOption()
	{
		return QVariant::fromValue(new QUninterpretedOption());
	}
	Q_INVOKABLE QVariant createSourceCodeInfo()
	{
		return QVariant::fromValue(new QSourceCodeInfo());
	}
	Q_INVOKABLE QVariant createGeneratedCodeInfo()
	{
		return QVariant::fromValue(new QGeneratedCodeInfo());
	}
};
}
}
#endif // GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
