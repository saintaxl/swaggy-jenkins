/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "InputStepImpllinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

InputStepImpllinks::InputStepImpllinks(QString* json) {
    init();
    this->fromJson(*json);
}

InputStepImpllinks::InputStepImpllinks() {
    init();
}

InputStepImpllinks::~InputStepImpllinks() {
    this->cleanup();
}

void
InputStepImpllinks::init() {
    self = new Link();
    _class = new QString("");
}

void
InputStepImpllinks::cleanup() {
    
    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

InputStepImpllinks*
InputStepImpllinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
InputStepImpllinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
InputStepImpllinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
InputStepImpllinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
InputStepImpllinks::getSelf() {
    return self;
}
void
InputStepImpllinks::setSelf(Link* self) {
    this->self = self;
}

QString*
InputStepImpllinks::getClass() {
    return _class;
}
void
InputStepImpllinks::setClass(QString* _class) {
    this->_class = _class;
}


}

