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


#include "Body.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

Body::Body(QString* json) {
    init();
    this->fromJson(*json);
}

Body::Body() {
    init();
}

Body::~Body() {
    this->cleanup();
}

void
Body::init() {
    favorite = false;
}

void
Body::cleanup() {
    
}

Body*
Body::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
Body::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&favorite, pJson["favorite"], "bool", "");
}

QString
Body::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
Body::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("favorite", QJsonValue(favorite));

    return obj;
}

bool
Body::getFavorite() {
    return favorite;
}
void
Body::setFavorite(bool favorite) {
    this->favorite = favorite;
}


}
