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


#include "SWGHudsonmodelFreeStyleBuild.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGHudsonmodelFreeStyleBuild::SWGHudsonmodelFreeStyleBuild(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHudsonmodelFreeStyleBuild::SWGHudsonmodelFreeStyleBuild() {
    init();
}

SWGHudsonmodelFreeStyleBuild::~SWGHudsonmodelFreeStyleBuild() {
    this->cleanup();
}

void
SWGHudsonmodelFreeStyleBuild::init() {
    _class = new QString("");
    number = 0;
    url = new QString("");
    actions = new QList<SWGHudsonmodelCauseAction*>();
    building = false;
    description = new QString("");
    display_name = new QString("");
    duration = 0;
    estimated_duration = 0;
    executor = new QString("");
    full_display_name = new QString("");
    id = new QString("");
    keep_log = false;
    queue_id = 0;
    result = new QString("");
    timestamp = 0;
    built_on = new QString("");
    change_set = new SWGHudsonscmEmptyChangeLogSet();
}

void
SWGHudsonmodelFreeStyleBuild::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }


    if(url != nullptr) {
        delete url;
    }

    if(actions != nullptr) {
        QList<SWGHudsonmodelCauseAction*>* arr = actions;
        foreach(SWGHudsonmodelCauseAction* o, *arr) {
            delete o;
        }
        delete actions;
    }


    if(description != nullptr) {
        delete description;
    }

    if(display_name != nullptr) {
        delete display_name;
    }



    if(executor != nullptr) {
        delete executor;
    }

    if(full_display_name != nullptr) {
        delete full_display_name;
    }

    if(id != nullptr) {
        delete id;
    }



    if(result != nullptr) {
        delete result;
    }


    if(built_on != nullptr) {
        delete built_on;
    }

    if(change_set != nullptr) {
        delete change_set;
    }
}

SWGHudsonmodelFreeStyleBuild*
SWGHudsonmodelFreeStyleBuild::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHudsonmodelFreeStyleBuild::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&number, pJson["number"], "qint32", "");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    
    ::Swagger::setValue(&actions, pJson["actions"], "QList", "SWGHudsonmodelCauseAction");
    
    ::Swagger::setValue(&building, pJson["building"], "bool", "");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&display_name, pJson["displayName"], "QString", "QString");
    ::Swagger::setValue(&duration, pJson["duration"], "qint32", "");
    ::Swagger::setValue(&estimated_duration, pJson["estimatedDuration"], "qint32", "");
    ::Swagger::setValue(&executor, pJson["executor"], "QString", "QString");
    ::Swagger::setValue(&full_display_name, pJson["fullDisplayName"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&keep_log, pJson["keepLog"], "bool", "");
    ::Swagger::setValue(&queue_id, pJson["queueId"], "qint32", "");
    ::Swagger::setValue(&result, pJson["result"], "QString", "QString");
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "qint32", "");
    ::Swagger::setValue(&built_on, pJson["builtOn"], "QString", "QString");
    ::Swagger::setValue(&change_set, pJson["changeSet"], "SWGHudsonscmEmptyChangeLogSet", "SWGHudsonscmEmptyChangeLogSet");
}

QString
SWGHudsonmodelFreeStyleBuild::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHudsonmodelFreeStyleBuild::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    obj->insert("number", QJsonValue(number));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    QJsonArray actionsJsonArray;
    toJsonArray((QList<void*>*)actions, &actionsJsonArray, "actions", "SWGHudsonmodelCauseAction");
    obj->insert("actions", actionsJsonArray);

    obj->insert("building", QJsonValue(building));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    toJsonValue(QString("displayName"), display_name, obj, QString("QString"));

    obj->insert("duration", QJsonValue(duration));

    obj->insert("estimatedDuration", QJsonValue(estimated_duration));

    toJsonValue(QString("executor"), executor, obj, QString("QString"));

    toJsonValue(QString("fullDisplayName"), full_display_name, obj, QString("QString"));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    obj->insert("keepLog", QJsonValue(keep_log));

    obj->insert("queueId", QJsonValue(queue_id));

    toJsonValue(QString("result"), result, obj, QString("QString"));

    obj->insert("timestamp", QJsonValue(timestamp));

    toJsonValue(QString("builtOn"), built_on, obj, QString("QString"));

    toJsonValue(QString("changeSet"), change_set, obj, QString("SWGHudsonscmEmptyChangeLogSet"));

    return obj;
}

QString*
SWGHudsonmodelFreeStyleBuild::getClass() {
    return _class;
}
void
SWGHudsonmodelFreeStyleBuild::setClass(QString* _class) {
    this->_class = _class;
}

qint32
SWGHudsonmodelFreeStyleBuild::getNumber() {
    return number;
}
void
SWGHudsonmodelFreeStyleBuild::setNumber(qint32 number) {
    this->number = number;
}

QString*
SWGHudsonmodelFreeStyleBuild::getUrl() {
    return url;
}
void
SWGHudsonmodelFreeStyleBuild::setUrl(QString* url) {
    this->url = url;
}

QList<SWGHudsonmodelCauseAction*>*
SWGHudsonmodelFreeStyleBuild::getActions() {
    return actions;
}
void
SWGHudsonmodelFreeStyleBuild::setActions(QList<SWGHudsonmodelCauseAction*>* actions) {
    this->actions = actions;
}

bool
SWGHudsonmodelFreeStyleBuild::getBuilding() {
    return building;
}
void
SWGHudsonmodelFreeStyleBuild::setBuilding(bool building) {
    this->building = building;
}

QString*
SWGHudsonmodelFreeStyleBuild::getDescription() {
    return description;
}
void
SWGHudsonmodelFreeStyleBuild::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGHudsonmodelFreeStyleBuild::getDisplayName() {
    return display_name;
}
void
SWGHudsonmodelFreeStyleBuild::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

qint32
SWGHudsonmodelFreeStyleBuild::getDuration() {
    return duration;
}
void
SWGHudsonmodelFreeStyleBuild::setDuration(qint32 duration) {
    this->duration = duration;
}

qint32
SWGHudsonmodelFreeStyleBuild::getEstimatedDuration() {
    return estimated_duration;
}
void
SWGHudsonmodelFreeStyleBuild::setEstimatedDuration(qint32 estimated_duration) {
    this->estimated_duration = estimated_duration;
}

QString*
SWGHudsonmodelFreeStyleBuild::getExecutor() {
    return executor;
}
void
SWGHudsonmodelFreeStyleBuild::setExecutor(QString* executor) {
    this->executor = executor;
}

QString*
SWGHudsonmodelFreeStyleBuild::getFullDisplayName() {
    return full_display_name;
}
void
SWGHudsonmodelFreeStyleBuild::setFullDisplayName(QString* full_display_name) {
    this->full_display_name = full_display_name;
}

QString*
SWGHudsonmodelFreeStyleBuild::getId() {
    return id;
}
void
SWGHudsonmodelFreeStyleBuild::setId(QString* id) {
    this->id = id;
}

bool
SWGHudsonmodelFreeStyleBuild::getKeepLog() {
    return keep_log;
}
void
SWGHudsonmodelFreeStyleBuild::setKeepLog(bool keep_log) {
    this->keep_log = keep_log;
}

qint32
SWGHudsonmodelFreeStyleBuild::getQueueId() {
    return queue_id;
}
void
SWGHudsonmodelFreeStyleBuild::setQueueId(qint32 queue_id) {
    this->queue_id = queue_id;
}

QString*
SWGHudsonmodelFreeStyleBuild::getResult() {
    return result;
}
void
SWGHudsonmodelFreeStyleBuild::setResult(QString* result) {
    this->result = result;
}

qint32
SWGHudsonmodelFreeStyleBuild::getTimestamp() {
    return timestamp;
}
void
SWGHudsonmodelFreeStyleBuild::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
}

QString*
SWGHudsonmodelFreeStyleBuild::getBuiltOn() {
    return built_on;
}
void
SWGHudsonmodelFreeStyleBuild::setBuiltOn(QString* built_on) {
    this->built_on = built_on;
}

SWGHudsonscmEmptyChangeLogSet*
SWGHudsonmodelFreeStyleBuild::getChangeSet() {
    return change_set;
}
void
SWGHudsonmodelFreeStyleBuild::setChangeSet(SWGHudsonscmEmptyChangeLogSet* change_set) {
    this->change_set = change_set;
}


}
