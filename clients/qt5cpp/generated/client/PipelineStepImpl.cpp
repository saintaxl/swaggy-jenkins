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


#include "PipelineStepImpl.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineStepImpl::PipelineStepImpl(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineStepImpl::PipelineStepImpl() {
    init();
}

PipelineStepImpl::~PipelineStepImpl() {
    this->cleanup();
}

void
PipelineStepImpl::init() {
    _class = new QString("");
    _links = new PipelineStepImpllinks();
    display_name = new QString("");
    duration_in_millis = 0;
    id = new QString("");
    input = new InputStepImpl();
    result = new QString("");
    start_time = new QString("");
    state = new QString("");
}

void
PipelineStepImpl::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(_links != nullptr) {
        delete _links;
    }

    if(display_name != nullptr) {
        delete display_name;
    }


    if(id != nullptr) {
        delete id;
    }

    if(input != nullptr) {
        delete input;
    }

    if(result != nullptr) {
        delete result;
    }

    if(start_time != nullptr) {
        delete start_time;
    }

    if(state != nullptr) {
        delete state;
    }
}

PipelineStepImpl*
PipelineStepImpl::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineStepImpl::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "PipelineStepImpllinks", "PipelineStepImpllinks");
    ::Swagger::setValue(&display_name, pJson["displayName"], "QString", "QString");
    ::Swagger::setValue(&duration_in_millis, pJson["durationInMillis"], "qint32", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&input, pJson["input"], "InputStepImpl", "InputStepImpl");
    ::Swagger::setValue(&result, pJson["result"], "QString", "QString");
    ::Swagger::setValue(&start_time, pJson["startTime"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
}

QString
PipelineStepImpl::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineStepImpl::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("PipelineStepImpllinks"));

    toJsonValue(QString("displayName"), display_name, obj, QString("QString"));

    obj->insert("durationInMillis", QJsonValue(duration_in_millis));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("input"), input, obj, QString("InputStepImpl"));

    toJsonValue(QString("result"), result, obj, QString("QString"));

    toJsonValue(QString("startTime"), start_time, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    return obj;
}

QString*
PipelineStepImpl::getClass() {
    return _class;
}
void
PipelineStepImpl::setClass(QString* _class) {
    this->_class = _class;
}

PipelineStepImpllinks*
PipelineStepImpl::getLinks() {
    return _links;
}
void
PipelineStepImpl::setLinks(PipelineStepImpllinks* _links) {
    this->_links = _links;
}

QString*
PipelineStepImpl::getDisplayName() {
    return display_name;
}
void
PipelineStepImpl::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

qint32
PipelineStepImpl::getDurationInMillis() {
    return duration_in_millis;
}
void
PipelineStepImpl::setDurationInMillis(qint32 duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
}

QString*
PipelineStepImpl::getId() {
    return id;
}
void
PipelineStepImpl::setId(QString* id) {
    this->id = id;
}

InputStepImpl*
PipelineStepImpl::getInput() {
    return input;
}
void
PipelineStepImpl::setInput(InputStepImpl* input) {
    this->input = input;
}

QString*
PipelineStepImpl::getResult() {
    return result;
}
void
PipelineStepImpl::setResult(QString* result) {
    this->result = result;
}

QString*
PipelineStepImpl::getStartTime() {
    return start_time;
}
void
PipelineStepImpl::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

QString*
PipelineStepImpl::getState() {
    return state;
}
void
PipelineStepImpl::setState(QString* state) {
    this->state = state;
}


}

