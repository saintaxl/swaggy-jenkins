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
 * MultibranchPipeline.h
 * 
 * 
 */

#ifndef MultibranchPipeline_H_
#define MultibranchPipeline_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class MultibranchPipeline: public SWGObject {
public:
    MultibranchPipeline();
    MultibranchPipeline(QString* json);
    virtual ~MultibranchPipeline();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    MultibranchPipeline* fromJson(QString &jsonString);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getLatestRun();
    void setLatestRun(QString* latest_run);

    QString* getName();
    void setName(QString* name);

    QString* getOrganization();
    void setOrganization(QString* organization);

    qint32 getWeatherScore();
    void setWeatherScore(qint32 weather_score);

    QList<QString*>* getBranchNames();
    void setBranchNames(QList<QString*>* branch_names);

    qint32 getNumberOfFailingBranches();
    void setNumberOfFailingBranches(qint32 number_of_failing_branches);

    qint32 getNumberOfFailingPullRequests();
    void setNumberOfFailingPullRequests(qint32 number_of_failing_pull_requests);

    qint32 getNumberOfSuccessfulBranches();
    void setNumberOfSuccessfulBranches(qint32 number_of_successful_branches);

    qint32 getNumberOfSuccessfulPullRequests();
    void setNumberOfSuccessfulPullRequests(qint32 number_of_successful_pull_requests);

    qint32 getTotalNumberOfBranches();
    void setTotalNumberOfBranches(qint32 total_number_of_branches);

    qint32 getTotalNumberOfPullRequests();
    void setTotalNumberOfPullRequests(qint32 total_number_of_pull_requests);

    QString* getClass();
    void setClass(QString* _class);


private:
    QString* display_name;
    qint32 estimated_duration_in_millis;
    QString* latest_run;
    QString* name;
    QString* organization;
    qint32 weather_score;
    QList<QString*>* branch_names;
    qint32 number_of_failing_branches;
    qint32 number_of_failing_pull_requests;
    qint32 number_of_successful_branches;
    qint32 number_of_successful_pull_requests;
    qint32 total_number_of_branches;
    qint32 total_number_of_pull_requests;
    QString* _class;
};

}

#endif /* MultibranchPipeline_H_ */