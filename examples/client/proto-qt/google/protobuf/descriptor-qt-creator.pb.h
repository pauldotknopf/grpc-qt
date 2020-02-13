#ifndef GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
#include <QObject>
#include "google/protobuf/descriptor-qt.pb.h"
class QGoogleProtobufDescriptorCreator : public QObject {
	Q_OBJECT
public:
	QGoogleProtobufDescriptorCreator(QObject* parent = nullptr) : QObject(parent)
	{
	}
	Q_INVOKABLE QFileDescriptorSet* createFileDescriptorSet()
	{
		return new QFileDescriptorSet();
	}
	Q_INVOKABLE QFileDescriptorProto* createFileDescriptorProto()
	{
		return new QFileDescriptorProto();
	}
	Q_INVOKABLE QDescriptorProto* createDescriptorProto()
	{
		return new QDescriptorProto();
	}
	Q_INVOKABLE QExtensionRangeOptions* createExtensionRangeOptions()
	{
		return new QExtensionRangeOptions();
	}
	Q_INVOKABLE QFieldDescriptorProto* createFieldDescriptorProto()
	{
		return new QFieldDescriptorProto();
	}
	Q_INVOKABLE QOneofDescriptorProto* createOneofDescriptorProto()
	{
		return new QOneofDescriptorProto();
	}
	Q_INVOKABLE QEnumDescriptorProto* createEnumDescriptorProto()
	{
		return new QEnumDescriptorProto();
	}
	Q_INVOKABLE QEnumValueDescriptorProto* createEnumValueDescriptorProto()
	{
		return new QEnumValueDescriptorProto();
	}
	Q_INVOKABLE QServiceDescriptorProto* createServiceDescriptorProto()
	{
		return new QServiceDescriptorProto();
	}
	Q_INVOKABLE QMethodDescriptorProto* createMethodDescriptorProto()
	{
		return new QMethodDescriptorProto();
	}
	Q_INVOKABLE QFileOptions* createFileOptions()
	{
		return new QFileOptions();
	}
	Q_INVOKABLE QMessageOptions* createMessageOptions()
	{
		return new QMessageOptions();
	}
	Q_INVOKABLE QFieldOptions* createFieldOptions()
	{
		return new QFieldOptions();
	}
	Q_INVOKABLE QOneofOptions* createOneofOptions()
	{
		return new QOneofOptions();
	}
	Q_INVOKABLE QEnumOptions* createEnumOptions()
	{
		return new QEnumOptions();
	}
	Q_INVOKABLE QEnumValueOptions* createEnumValueOptions()
	{
		return new QEnumValueOptions();
	}
	Q_INVOKABLE QServiceOptions* createServiceOptions()
	{
		return new QServiceOptions();
	}
	Q_INVOKABLE QMethodOptions* createMethodOptions()
	{
		return new QMethodOptions();
	}
	Q_INVOKABLE QUninterpretedOption* createUninterpretedOption()
	{
		return new QUninterpretedOption();
	}
	Q_INVOKABLE QSourceCodeInfo* createSourceCodeInfo()
	{
		return new QSourceCodeInfo();
	}
	Q_INVOKABLE QGeneratedCodeInfo* createGeneratedCodeInfo()
	{
		return new QGeneratedCodeInfo();
	}
};
#endif // GOOGLE_PROTOBUF_DESCRIPTORPROTO_H_CREATOR
