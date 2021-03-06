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


#include "PipelineRuns.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineRuns::PipelineRuns(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineRuns::PipelineRuns() {
    init();
}

PipelineRuns::~PipelineRuns() {
    this->cleanup();
}

void
PipelineRuns::init() {
}

void
PipelineRuns::cleanup() {
    }

PipelineRuns*
PipelineRuns::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineRuns::fromJsonObject(QJsonObject &pJson) {
}

QString
PipelineRuns::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineRuns::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    return obj;
}


}

