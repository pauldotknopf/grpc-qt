#include "google/protobuf/descriptor-qt.pb.h"
QFileDescriptorSet::QFileDescriptorSet() : _message(new google::protobuf::FileDescriptorSet())
{
}
QFileDescriptorSet::~QFileDescriptorSet()
{
}
QFileDescriptorProto::QFileDescriptorProto() : _message(new google::protobuf::FileDescriptorProto())
{
}
QFileDescriptorProto::~QFileDescriptorProto()
{
}
void QFileDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QFileDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
void QFileDescriptorProto::setPackage(QString val)
{
	_message->set_package(val.toStdString());
}
QString QFileDescriptorProto::getPackage()
{
	return QString::fromStdString(_message->package());
}
void QFileDescriptorProto::setSyntax(QString val)
{
	_message->set_syntax(val.toStdString());
}
QString QFileDescriptorProto::getSyntax()
{
	return QString::fromStdString(_message->syntax());
}
QDescriptorProto::QDescriptorProto() : _message(new google::protobuf::DescriptorProto())
{
}
QDescriptorProto::~QDescriptorProto()
{
}
void QDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
QExtensionRangeOptions::QExtensionRangeOptions() : _message(new google::protobuf::ExtensionRangeOptions())
{
}
QExtensionRangeOptions::~QExtensionRangeOptions()
{
}
QFieldDescriptorProto::QFieldDescriptorProto() : _message(new google::protobuf::FieldDescriptorProto())
{
}
QFieldDescriptorProto::~QFieldDescriptorProto()
{
}
void QFieldDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QFieldDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
void QFieldDescriptorProto::setTypeName(QString val)
{
	_message->set_type_name(val.toStdString());
}
QString QFieldDescriptorProto::getTypeName()
{
	return QString::fromStdString(_message->type_name());
}
void QFieldDescriptorProto::setExtendee(QString val)
{
	_message->set_extendee(val.toStdString());
}
QString QFieldDescriptorProto::getExtendee()
{
	return QString::fromStdString(_message->extendee());
}
void QFieldDescriptorProto::setDefaultValue(QString val)
{
	_message->set_default_value(val.toStdString());
}
QString QFieldDescriptorProto::getDefaultValue()
{
	return QString::fromStdString(_message->default_value());
}
void QFieldDescriptorProto::setJsonName(QString val)
{
	_message->set_json_name(val.toStdString());
}
QString QFieldDescriptorProto::getJsonName()
{
	return QString::fromStdString(_message->json_name());
}
QOneofDescriptorProto::QOneofDescriptorProto() : _message(new google::protobuf::OneofDescriptorProto())
{
}
QOneofDescriptorProto::~QOneofDescriptorProto()
{
}
void QOneofDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QOneofDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
QEnumDescriptorProto::QEnumDescriptorProto() : _message(new google::protobuf::EnumDescriptorProto())
{
}
QEnumDescriptorProto::~QEnumDescriptorProto()
{
}
void QEnumDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QEnumDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
QEnumValueDescriptorProto::QEnumValueDescriptorProto() : _message(new google::protobuf::EnumValueDescriptorProto())
{
}
QEnumValueDescriptorProto::~QEnumValueDescriptorProto()
{
}
void QEnumValueDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QEnumValueDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
QServiceDescriptorProto::QServiceDescriptorProto() : _message(new google::protobuf::ServiceDescriptorProto())
{
}
QServiceDescriptorProto::~QServiceDescriptorProto()
{
}
void QServiceDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QServiceDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
QMethodDescriptorProto::QMethodDescriptorProto() : _message(new google::protobuf::MethodDescriptorProto())
{
}
QMethodDescriptorProto::~QMethodDescriptorProto()
{
}
void QMethodDescriptorProto::setName(QString val)
{
	_message->set_name(val.toStdString());
}
QString QMethodDescriptorProto::getName()
{
	return QString::fromStdString(_message->name());
}
void QMethodDescriptorProto::setInputType(QString val)
{
	_message->set_input_type(val.toStdString());
}
QString QMethodDescriptorProto::getInputType()
{
	return QString::fromStdString(_message->input_type());
}
void QMethodDescriptorProto::setOutputType(QString val)
{
	_message->set_output_type(val.toStdString());
}
QString QMethodDescriptorProto::getOutputType()
{
	return QString::fromStdString(_message->output_type());
}
void QMethodDescriptorProto::setClientStreaming(bool val)
{
	_message->set_client_streaming(val);
}
bool QMethodDescriptorProto::getClientStreaming()
{
	return _message->client_streaming();
}
void QMethodDescriptorProto::setServerStreaming(bool val)
{
	_message->set_server_streaming(val);
}
bool QMethodDescriptorProto::getServerStreaming()
{
	return _message->server_streaming();
}
QFileOptions::QFileOptions() : _message(new google::protobuf::FileOptions())
{
}
QFileOptions::~QFileOptions()
{
}
void QFileOptions::setJavaPackage(QString val)
{
	_message->set_java_package(val.toStdString());
}
QString QFileOptions::getJavaPackage()
{
	return QString::fromStdString(_message->java_package());
}
void QFileOptions::setJavaOuterClassname(QString val)
{
	_message->set_java_outer_classname(val.toStdString());
}
QString QFileOptions::getJavaOuterClassname()
{
	return QString::fromStdString(_message->java_outer_classname());
}
void QFileOptions::setJavaMultipleFiles(bool val)
{
	_message->set_java_multiple_files(val);
}
bool QFileOptions::getJavaMultipleFiles()
{
	return _message->java_multiple_files();
}
void QFileOptions::setJavaStringCheckUtf8(bool val)
{
	_message->set_java_string_check_utf8(val);
}
bool QFileOptions::getJavaStringCheckUtf8()
{
	return _message->java_string_check_utf8();
}
void QFileOptions::setGoPackage(QString val)
{
	_message->set_go_package(val.toStdString());
}
QString QFileOptions::getGoPackage()
{
	return QString::fromStdString(_message->go_package());
}
void QFileOptions::setCcGenericServices(bool val)
{
	_message->set_cc_generic_services(val);
}
bool QFileOptions::getCcGenericServices()
{
	return _message->cc_generic_services();
}
void QFileOptions::setJavaGenericServices(bool val)
{
	_message->set_java_generic_services(val);
}
bool QFileOptions::getJavaGenericServices()
{
	return _message->java_generic_services();
}
void QFileOptions::setPyGenericServices(bool val)
{
	_message->set_py_generic_services(val);
}
bool QFileOptions::getPyGenericServices()
{
	return _message->py_generic_services();
}
void QFileOptions::setPhpGenericServices(bool val)
{
	_message->set_php_generic_services(val);
}
bool QFileOptions::getPhpGenericServices()
{
	return _message->php_generic_services();
}
void QFileOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QFileOptions::getDeprecated()
{
	return _message->deprecated();
}
void QFileOptions::setCcEnableArenas(bool val)
{
	_message->set_cc_enable_arenas(val);
}
bool QFileOptions::getCcEnableArenas()
{
	return _message->cc_enable_arenas();
}
void QFileOptions::setObjcClassPrefix(QString val)
{
	_message->set_objc_class_prefix(val.toStdString());
}
QString QFileOptions::getObjcClassPrefix()
{
	return QString::fromStdString(_message->objc_class_prefix());
}
void QFileOptions::setCsharpNamespace(QString val)
{
	_message->set_csharp_namespace(val.toStdString());
}
QString QFileOptions::getCsharpNamespace()
{
	return QString::fromStdString(_message->csharp_namespace());
}
void QFileOptions::setSwiftPrefix(QString val)
{
	_message->set_swift_prefix(val.toStdString());
}
QString QFileOptions::getSwiftPrefix()
{
	return QString::fromStdString(_message->swift_prefix());
}
void QFileOptions::setPhpClassPrefix(QString val)
{
	_message->set_php_class_prefix(val.toStdString());
}
QString QFileOptions::getPhpClassPrefix()
{
	return QString::fromStdString(_message->php_class_prefix());
}
void QFileOptions::setPhpNamespace(QString val)
{
	_message->set_php_namespace(val.toStdString());
}
QString QFileOptions::getPhpNamespace()
{
	return QString::fromStdString(_message->php_namespace());
}
void QFileOptions::setPhpMetadataNamespace(QString val)
{
	_message->set_php_metadata_namespace(val.toStdString());
}
QString QFileOptions::getPhpMetadataNamespace()
{
	return QString::fromStdString(_message->php_metadata_namespace());
}
void QFileOptions::setRubyPackage(QString val)
{
	_message->set_ruby_package(val.toStdString());
}
QString QFileOptions::getRubyPackage()
{
	return QString::fromStdString(_message->ruby_package());
}
QMessageOptions::QMessageOptions() : _message(new google::protobuf::MessageOptions())
{
}
QMessageOptions::~QMessageOptions()
{
}
void QMessageOptions::setMessageSetWireFormat(bool val)
{
	_message->set_message_set_wire_format(val);
}
bool QMessageOptions::getMessageSetWireFormat()
{
	return _message->message_set_wire_format();
}
void QMessageOptions::setNoStandardDescriptorAccessor(bool val)
{
	_message->set_no_standard_descriptor_accessor(val);
}
bool QMessageOptions::getNoStandardDescriptorAccessor()
{
	return _message->no_standard_descriptor_accessor();
}
void QMessageOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QMessageOptions::getDeprecated()
{
	return _message->deprecated();
}
void QMessageOptions::setMapEntry(bool val)
{
	_message->set_map_entry(val);
}
bool QMessageOptions::getMapEntry()
{
	return _message->map_entry();
}
QFieldOptions::QFieldOptions() : _message(new google::protobuf::FieldOptions())
{
}
QFieldOptions::~QFieldOptions()
{
}
void QFieldOptions::setPacked(bool val)
{
	_message->set_packed(val);
}
bool QFieldOptions::getPacked()
{
	return _message->packed();
}
void QFieldOptions::setLazy(bool val)
{
	_message->set_lazy(val);
}
bool QFieldOptions::getLazy()
{
	return _message->lazy();
}
void QFieldOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QFieldOptions::getDeprecated()
{
	return _message->deprecated();
}
void QFieldOptions::setWeak(bool val)
{
	_message->set_weak(val);
}
bool QFieldOptions::getWeak()
{
	return _message->weak();
}
QOneofOptions::QOneofOptions() : _message(new google::protobuf::OneofOptions())
{
}
QOneofOptions::~QOneofOptions()
{
}
QEnumOptions::QEnumOptions() : _message(new google::protobuf::EnumOptions())
{
}
QEnumOptions::~QEnumOptions()
{
}
void QEnumOptions::setAllowAlias(bool val)
{
	_message->set_allow_alias(val);
}
bool QEnumOptions::getAllowAlias()
{
	return _message->allow_alias();
}
void QEnumOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QEnumOptions::getDeprecated()
{
	return _message->deprecated();
}
QEnumValueOptions::QEnumValueOptions() : _message(new google::protobuf::EnumValueOptions())
{
}
QEnumValueOptions::~QEnumValueOptions()
{
}
void QEnumValueOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QEnumValueOptions::getDeprecated()
{
	return _message->deprecated();
}
QServiceOptions::QServiceOptions() : _message(new google::protobuf::ServiceOptions())
{
}
QServiceOptions::~QServiceOptions()
{
}
void QServiceOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QServiceOptions::getDeprecated()
{
	return _message->deprecated();
}
QMethodOptions::QMethodOptions() : _message(new google::protobuf::MethodOptions())
{
}
QMethodOptions::~QMethodOptions()
{
}
void QMethodOptions::setDeprecated(bool val)
{
	_message->set_deprecated(val);
}
bool QMethodOptions::getDeprecated()
{
	return _message->deprecated();
}
QUninterpretedOption::QUninterpretedOption() : _message(new google::protobuf::UninterpretedOption())
{
}
QUninterpretedOption::~QUninterpretedOption()
{
}
void QUninterpretedOption::setIdentifierValue(QString val)
{
	_message->set_identifier_value(val.toStdString());
}
QString QUninterpretedOption::getIdentifierValue()
{
	return QString::fromStdString(_message->identifier_value());
}
void QUninterpretedOption::setAggregateValue(QString val)
{
	_message->set_aggregate_value(val.toStdString());
}
QString QUninterpretedOption::getAggregateValue()
{
	return QString::fromStdString(_message->aggregate_value());
}
QSourceCodeInfo::QSourceCodeInfo() : _message(new google::protobuf::SourceCodeInfo())
{
}
QSourceCodeInfo::~QSourceCodeInfo()
{
}
QGeneratedCodeInfo::QGeneratedCodeInfo() : _message(new google::protobuf::GeneratedCodeInfo())
{
}
QGeneratedCodeInfo::~QGeneratedCodeInfo()
{
}
