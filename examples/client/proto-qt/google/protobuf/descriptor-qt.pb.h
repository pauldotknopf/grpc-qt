#ifndef GOOGLE_PROTOBUF_DESCRIPTORPROTO_H
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_H
#include <QObject>
#include <QSharedPointer>
#include "google/protobuf/descriptor.pb.h"
class QFileDescriptorSet : public QObject
{
	Q_OBJECT
public:
	QFileDescriptorSet();
	~QFileDescriptorSet();
private:
	QSharedPointer<google::protobuf::FileDescriptorSet> _message;
};
class QFileDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
	Q_PROPERTY(QString package READ getPackage WRITE setPackage)
	Q_PROPERTY(QString syntax READ getSyntax WRITE setSyntax)
public:
	QFileDescriptorProto();
	~QFileDescriptorProto();
	void setName(QString val);
	QString getName();
	void setPackage(QString val);
	QString getPackage();
	void setSyntax(QString val);
	QString getSyntax();
private:
	QSharedPointer<google::protobuf::FileDescriptorProto> _message;
};
class QDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
public:
	QDescriptorProto();
	~QDescriptorProto();
	void setName(QString val);
	QString getName();
private:
	QSharedPointer<google::protobuf::DescriptorProto> _message;
};
class QExtensionRangeOptions : public QObject
{
	Q_OBJECT
public:
	QExtensionRangeOptions();
	~QExtensionRangeOptions();
private:
	QSharedPointer<google::protobuf::ExtensionRangeOptions> _message;
};
class QFieldDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
	Q_PROPERTY(QString typeName READ getTypeName WRITE setTypeName)
	Q_PROPERTY(QString extendee READ getExtendee WRITE setExtendee)
	Q_PROPERTY(QString defaultValue READ getDefaultValue WRITE setDefaultValue)
	Q_PROPERTY(QString jsonName READ getJsonName WRITE setJsonName)
public:
	QFieldDescriptorProto();
	~QFieldDescriptorProto();
	void setName(QString val);
	QString getName();
	void setTypeName(QString val);
	QString getTypeName();
	void setExtendee(QString val);
	QString getExtendee();
	void setDefaultValue(QString val);
	QString getDefaultValue();
	void setJsonName(QString val);
	QString getJsonName();
private:
	QSharedPointer<google::protobuf::FieldDescriptorProto> _message;
};
class QOneofDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
public:
	QOneofDescriptorProto();
	~QOneofDescriptorProto();
	void setName(QString val);
	QString getName();
private:
	QSharedPointer<google::protobuf::OneofDescriptorProto> _message;
};
class QEnumDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
public:
	QEnumDescriptorProto();
	~QEnumDescriptorProto();
	void setName(QString val);
	QString getName();
private:
	QSharedPointer<google::protobuf::EnumDescriptorProto> _message;
};
class QEnumValueDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
public:
	QEnumValueDescriptorProto();
	~QEnumValueDescriptorProto();
	void setName(QString val);
	QString getName();
private:
	QSharedPointer<google::protobuf::EnumValueDescriptorProto> _message;
};
class QServiceDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
public:
	QServiceDescriptorProto();
	~QServiceDescriptorProto();
	void setName(QString val);
	QString getName();
private:
	QSharedPointer<google::protobuf::ServiceDescriptorProto> _message;
};
class QMethodDescriptorProto : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString name READ getName WRITE setName)
	Q_PROPERTY(QString inputType READ getInputType WRITE setInputType)
	Q_PROPERTY(QString outputType READ getOutputType WRITE setOutputType)
	Q_PROPERTY(bool clientStreaming READ getClientStreaming WRITE setClientStreaming)
	Q_PROPERTY(bool serverStreaming READ getServerStreaming WRITE setServerStreaming)
public:
	QMethodDescriptorProto();
	~QMethodDescriptorProto();
	void setName(QString val);
	QString getName();
	void setInputType(QString val);
	QString getInputType();
	void setOutputType(QString val);
	QString getOutputType();
	void setClientStreaming(bool val);
	bool getClientStreaming();
	void setServerStreaming(bool val);
	bool getServerStreaming();
private:
	QSharedPointer<google::protobuf::MethodDescriptorProto> _message;
};
class QFileOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString javaPackage READ getJavaPackage WRITE setJavaPackage)
	Q_PROPERTY(QString javaOuterClassname READ getJavaOuterClassname WRITE setJavaOuterClassname)
	Q_PROPERTY(bool javaMultipleFiles READ getJavaMultipleFiles WRITE setJavaMultipleFiles)
	Q_PROPERTY(bool javaGenerateEqualsAndHash READ getJavaGenerateEqualsAndHash WRITE setJavaGenerateEqualsAndHash)
	Q_PROPERTY(bool javaStringCheckUtf8 READ getJavaStringCheckUtf8 WRITE setJavaStringCheckUtf8)
	Q_PROPERTY(QString goPackage READ getGoPackage WRITE setGoPackage)
	Q_PROPERTY(bool ccGenericServices READ getCcGenericServices WRITE setCcGenericServices)
	Q_PROPERTY(bool javaGenericServices READ getJavaGenericServices WRITE setJavaGenericServices)
	Q_PROPERTY(bool pyGenericServices READ getPyGenericServices WRITE setPyGenericServices)
	Q_PROPERTY(bool phpGenericServices READ getPhpGenericServices WRITE setPhpGenericServices)
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
	Q_PROPERTY(bool ccEnableArenas READ getCcEnableArenas WRITE setCcEnableArenas)
	Q_PROPERTY(QString objcClassPrefix READ getObjcClassPrefix WRITE setObjcClassPrefix)
	Q_PROPERTY(QString csharpNamespace READ getCsharpNamespace WRITE setCsharpNamespace)
	Q_PROPERTY(QString swiftPrefix READ getSwiftPrefix WRITE setSwiftPrefix)
	Q_PROPERTY(QString phpClassPrefix READ getPhpClassPrefix WRITE setPhpClassPrefix)
	Q_PROPERTY(QString phpNamespace READ getPhpNamespace WRITE setPhpNamespace)
	Q_PROPERTY(QString phpMetadataNamespace READ getPhpMetadataNamespace WRITE setPhpMetadataNamespace)
	Q_PROPERTY(QString rubyPackage READ getRubyPackage WRITE setRubyPackage)
public:
	QFileOptions();
	~QFileOptions();
	void setJavaPackage(QString val);
	QString getJavaPackage();
	void setJavaOuterClassname(QString val);
	QString getJavaOuterClassname();
	void setJavaMultipleFiles(bool val);
	bool getJavaMultipleFiles();
	void setJavaGenerateEqualsAndHash(bool val);
	bool getJavaGenerateEqualsAndHash();
	void setJavaStringCheckUtf8(bool val);
	bool getJavaStringCheckUtf8();
	void setGoPackage(QString val);
	QString getGoPackage();
	void setCcGenericServices(bool val);
	bool getCcGenericServices();
	void setJavaGenericServices(bool val);
	bool getJavaGenericServices();
	void setPyGenericServices(bool val);
	bool getPyGenericServices();
	void setPhpGenericServices(bool val);
	bool getPhpGenericServices();
	void setDeprecated(bool val);
	bool getDeprecated();
	void setCcEnableArenas(bool val);
	bool getCcEnableArenas();
	void setObjcClassPrefix(QString val);
	QString getObjcClassPrefix();
	void setCsharpNamespace(QString val);
	QString getCsharpNamespace();
	void setSwiftPrefix(QString val);
	QString getSwiftPrefix();
	void setPhpClassPrefix(QString val);
	QString getPhpClassPrefix();
	void setPhpNamespace(QString val);
	QString getPhpNamespace();
	void setPhpMetadataNamespace(QString val);
	QString getPhpMetadataNamespace();
	void setRubyPackage(QString val);
	QString getRubyPackage();
private:
	QSharedPointer<google::protobuf::FileOptions> _message;
};
class QMessageOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool messageSetWireFormat READ getMessageSetWireFormat WRITE setMessageSetWireFormat)
	Q_PROPERTY(bool noStandardDescriptorAccessor READ getNoStandardDescriptorAccessor WRITE setNoStandardDescriptorAccessor)
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
	Q_PROPERTY(bool mapEntry READ getMapEntry WRITE setMapEntry)
public:
	QMessageOptions();
	~QMessageOptions();
	void setMessageSetWireFormat(bool val);
	bool getMessageSetWireFormat();
	void setNoStandardDescriptorAccessor(bool val);
	bool getNoStandardDescriptorAccessor();
	void setDeprecated(bool val);
	bool getDeprecated();
	void setMapEntry(bool val);
	bool getMapEntry();
private:
	QSharedPointer<google::protobuf::MessageOptions> _message;
};
class QFieldOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool packed READ getPacked WRITE setPacked)
	Q_PROPERTY(bool lazy READ getLazy WRITE setLazy)
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
	Q_PROPERTY(bool weak READ getWeak WRITE setWeak)
public:
	QFieldOptions();
	~QFieldOptions();
	void setPacked(bool val);
	bool getPacked();
	void setLazy(bool val);
	bool getLazy();
	void setDeprecated(bool val);
	bool getDeprecated();
	void setWeak(bool val);
	bool getWeak();
private:
	QSharedPointer<google::protobuf::FieldOptions> _message;
};
class QOneofOptions : public QObject
{
	Q_OBJECT
public:
	QOneofOptions();
	~QOneofOptions();
private:
	QSharedPointer<google::protobuf::OneofOptions> _message;
};
class QEnumOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool allowAlias READ getAllowAlias WRITE setAllowAlias)
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
public:
	QEnumOptions();
	~QEnumOptions();
	void setAllowAlias(bool val);
	bool getAllowAlias();
	void setDeprecated(bool val);
	bool getDeprecated();
private:
	QSharedPointer<google::protobuf::EnumOptions> _message;
};
class QEnumValueOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
public:
	QEnumValueOptions();
	~QEnumValueOptions();
	void setDeprecated(bool val);
	bool getDeprecated();
private:
	QSharedPointer<google::protobuf::EnumValueOptions> _message;
};
class QServiceOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
public:
	QServiceOptions();
	~QServiceOptions();
	void setDeprecated(bool val);
	bool getDeprecated();
private:
	QSharedPointer<google::protobuf::ServiceOptions> _message;
};
class QMethodOptions : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool deprecated READ getDeprecated WRITE setDeprecated)
public:
	QMethodOptions();
	~QMethodOptions();
	void setDeprecated(bool val);
	bool getDeprecated();
private:
	QSharedPointer<google::protobuf::MethodOptions> _message;
};
class QUninterpretedOption : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString identifierValue READ getIdentifierValue WRITE setIdentifierValue)
	Q_PROPERTY(QString aggregateValue READ getAggregateValue WRITE setAggregateValue)
public:
	QUninterpretedOption();
	~QUninterpretedOption();
	void setIdentifierValue(QString val);
	QString getIdentifierValue();
	void setAggregateValue(QString val);
	QString getAggregateValue();
private:
	QSharedPointer<google::protobuf::UninterpretedOption> _message;
};
class QSourceCodeInfo : public QObject
{
	Q_OBJECT
public:
	QSourceCodeInfo();
	~QSourceCodeInfo();
private:
	QSharedPointer<google::protobuf::SourceCodeInfo> _message;
};
class QGeneratedCodeInfo : public QObject
{
	Q_OBJECT
public:
	QGeneratedCodeInfo();
	~QGeneratedCodeInfo();
private:
	QSharedPointer<google::protobuf::GeneratedCodeInfo> _message;
};
#endif // GOOGLE_PROTOBUF_DESCRIPTORPROTO_H
