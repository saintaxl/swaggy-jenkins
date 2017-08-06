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

/*
 * DefaultCrumbIssuer.h
 * 
 * 
 */

#ifndef DefaultCrumbIssuer_H_
#define DefaultCrumbIssuer_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class DefaultCrumbIssuer: public SWGObject {
public:
    DefaultCrumbIssuer();
    DefaultCrumbIssuer(QString* json);
    virtual ~DefaultCrumbIssuer();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    DefaultCrumbIssuer* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getCrumb();
    void setCrumb(QString* crumb);

    QString* getCrumbRequestField();
    void setCrumbRequestField(QString* crumb_request_field);


private:
    QString* _class;
    QString* crumb;
    QString* crumb_request_field;
};

}

#endif /* DefaultCrumbIssuer_H_ */