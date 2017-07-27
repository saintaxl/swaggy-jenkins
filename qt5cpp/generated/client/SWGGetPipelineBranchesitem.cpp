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


#include "SWGGetPipelineBranchesitem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGetPipelineBranchesitem::SWGGetPipelineBranchesitem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGetPipelineBranchesitem::SWGGetPipelineBranchesitem() {
    init();
}

SWGGetPipelineBranchesitem::~SWGGetPipelineBranchesitem() {
    this->cleanup();
}

void
SWGGetPipelineBranchesitem::init() {
    display_name = new QString("");
    estimated_duration_in_millis = 0;
    name = new QString("");
    weather_score = 0;
    latest_run = new SWGGetPipelineBranchesitem_latestRun();
    organization = new QString("");
    pull_request = new SWGGetPipelineBranchesitem_pullRequest();
    total_number_of_pull_requests = 0;
    _class = new QString("");
}

void
SWGGetPipelineBranchesitem::cleanup() {
    
    if(display_name != nullptr) {
        delete display_name;
    }


    if(name != nullptr) {
        delete name;
    }


    if(latest_run != nullptr) {
        delete latest_run;
    }

    if(organization != nullptr) {
        delete organization;
    }

    if(pull_request != nullptr) {
        delete pull_request;
    }


    if(_class != nullptr) {
        delete _class;
    }
}

SWGGetPipelineBranchesitem*
SWGGetPipelineBranchesitem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGetPipelineBranchesitem::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&display_name, pJson["displayName"], "QString", "QString");
    ::Swagger::setValue(&estimated_duration_in_millis, pJson["estimatedDurationInMillis"], "qint32", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&weather_score, pJson["weatherScore"], "qint32", "");
    ::Swagger::setValue(&latest_run, pJson["latestRun"], "SWGGetPipelineBranchesitem_latestRun", "SWGGetPipelineBranchesitem_latestRun");
    ::Swagger::setValue(&organization, pJson["organization"], "QString", "QString");
    ::Swagger::setValue(&pull_request, pJson["pullRequest"], "SWGGetPipelineBranchesitem_pullRequest", "SWGGetPipelineBranchesitem_pullRequest");
    ::Swagger::setValue(&total_number_of_pull_requests, pJson["totalNumberOfPullRequests"], "qint32", "");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGGetPipelineBranchesitem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGetPipelineBranchesitem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("displayName"), display_name, obj, QString("QString"));

    obj->insert("estimatedDurationInMillis", QJsonValue(estimated_duration_in_millis));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("weatherScore", QJsonValue(weather_score));

    toJsonValue(QString("latestRun"), latest_run, obj, QString("SWGGetPipelineBranchesitem_latestRun"));

    toJsonValue(QString("organization"), organization, obj, QString("QString"));

    toJsonValue(QString("pullRequest"), pull_request, obj, QString("SWGGetPipelineBranchesitem_pullRequest"));

    obj->insert("totalNumberOfPullRequests", QJsonValue(total_number_of_pull_requests));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

QString*
SWGGetPipelineBranchesitem::getDisplayName() {
    return display_name;
}
void
SWGGetPipelineBranchesitem::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

qint32
SWGGetPipelineBranchesitem::getEstimatedDurationInMillis() {
    return estimated_duration_in_millis;
}
void
SWGGetPipelineBranchesitem::setEstimatedDurationInMillis(qint32 estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
}

QString*
SWGGetPipelineBranchesitem::getName() {
    return name;
}
void
SWGGetPipelineBranchesitem::setName(QString* name) {
    this->name = name;
}

qint32
SWGGetPipelineBranchesitem::getWeatherScore() {
    return weather_score;
}
void
SWGGetPipelineBranchesitem::setWeatherScore(qint32 weather_score) {
    this->weather_score = weather_score;
}

SWGGetPipelineBranchesitem_latestRun*
SWGGetPipelineBranchesitem::getLatestRun() {
    return latest_run;
}
void
SWGGetPipelineBranchesitem::setLatestRun(SWGGetPipelineBranchesitem_latestRun* latest_run) {
    this->latest_run = latest_run;
}

QString*
SWGGetPipelineBranchesitem::getOrganization() {
    return organization;
}
void
SWGGetPipelineBranchesitem::setOrganization(QString* organization) {
    this->organization = organization;
}

SWGGetPipelineBranchesitem_pullRequest*
SWGGetPipelineBranchesitem::getPullRequest() {
    return pull_request;
}
void
SWGGetPipelineBranchesitem::setPullRequest(SWGGetPipelineBranchesitem_pullRequest* pull_request) {
    this->pull_request = pull_request;
}

qint32
SWGGetPipelineBranchesitem::getTotalNumberOfPullRequests() {
    return total_number_of_pull_requests;
}
void
SWGGetPipelineBranchesitem::setTotalNumberOfPullRequests(qint32 total_number_of_pull_requests) {
    this->total_number_of_pull_requests = total_number_of_pull_requests;
}

QString*
SWGGetPipelineBranchesitem::getClass() {
    return _class;
}
void
SWGGetPipelineBranchesitem::setClass(QString* _class) {
    this->_class = _class;
}


}
