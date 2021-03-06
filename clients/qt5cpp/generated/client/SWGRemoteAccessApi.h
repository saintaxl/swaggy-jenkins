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

#ifndef _SWG_SWGRemoteAccessApi_H_
#define _SWG_SWGRemoteAccessApi_H_

#include "SWGHttpRequest.h"

#include "ComputerSet.h"
#include "DefaultCrumbIssuer.h"
#include "FreeStyleBuild.h"
#include "FreeStyleProject.h"
#include "Hudson.h"
#include "ListView.h"
#include <QString>
#include "Queue.h"

#include <QObject>

namespace Swagger {

class SWGRemoteAccessApi: public QObject {
    Q_OBJECT

public:
    SWGRemoteAccessApi();
    SWGRemoteAccessApi(QString host, QString basePath);
    ~SWGRemoteAccessApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void getComputer(qint32 depth);
    void getCrumb();
    void getJenkins();
    void getJob(QString* name);
    void getJobConfig(QString* name);
    void getJobLastBuild(QString* name);
    void getJobProgressiveText(QString* name, QString* number, QString* start);
    void getQueue();
    void getQueueItem(QString* number);
    void getView(QString* name);
    void getViewConfig(QString* name);
    void headJenkins();
    void postCreateItem(QString* name, QString* from, QString* mode, QString* body, QString* jenkins_crumb, QString* content_type);
    void postCreateView(QString* name, QString* body, QString* jenkins_crumb, QString* content_type);
    void postJobBuild(QString* name, QString* json, QString* token, QString* jenkins_crumb);
    void postJobConfig(QString* name, QString* body, QString* jenkins_crumb);
    void postJobDelete(QString* name, QString* jenkins_crumb);
    void postJobDisable(QString* name, QString* jenkins_crumb);
    void postJobEnable(QString* name, QString* jenkins_crumb);
    void postJobLastBuildStop(QString* name, QString* jenkins_crumb);
    void postViewConfig(QString* name, QString* body, QString* jenkins_crumb);
    
private:
    void getComputerCallback (HttpRequestWorker * worker);
    void getCrumbCallback (HttpRequestWorker * worker);
    void getJenkinsCallback (HttpRequestWorker * worker);
    void getJobCallback (HttpRequestWorker * worker);
    void getJobConfigCallback (HttpRequestWorker * worker);
    void getJobLastBuildCallback (HttpRequestWorker * worker);
    void getJobProgressiveTextCallback (HttpRequestWorker * worker);
    void getQueueCallback (HttpRequestWorker * worker);
    void getQueueItemCallback (HttpRequestWorker * worker);
    void getViewCallback (HttpRequestWorker * worker);
    void getViewConfigCallback (HttpRequestWorker * worker);
    void headJenkinsCallback (HttpRequestWorker * worker);
    void postCreateItemCallback (HttpRequestWorker * worker);
    void postCreateViewCallback (HttpRequestWorker * worker);
    void postJobBuildCallback (HttpRequestWorker * worker);
    void postJobConfigCallback (HttpRequestWorker * worker);
    void postJobDeleteCallback (HttpRequestWorker * worker);
    void postJobDisableCallback (HttpRequestWorker * worker);
    void postJobEnableCallback (HttpRequestWorker * worker);
    void postJobLastBuildStopCallback (HttpRequestWorker * worker);
    void postViewConfigCallback (HttpRequestWorker * worker);
    
signals:
    void getComputerSignal(ComputerSet* summary);
    void getCrumbSignal(DefaultCrumbIssuer* summary);
    void getJenkinsSignal(Hudson* summary);
    void getJobSignal(FreeStyleProject* summary);
    void getJobConfigSignal(QString* summary);
    void getJobLastBuildSignal(FreeStyleBuild* summary);
    void getJobProgressiveTextSignal();
    void getQueueSignal(Queue* summary);
    void getQueueItemSignal(Queue* summary);
    void getViewSignal(ListView* summary);
    void getViewConfigSignal(QString* summary);
    void headJenkinsSignal();
    void postCreateItemSignal();
    void postCreateViewSignal();
    void postJobBuildSignal();
    void postJobConfigSignal();
    void postJobDeleteSignal();
    void postJobDisableSignal();
    void postJobEnableSignal();
    void postJobLastBuildStopSignal();
    void postViewConfigSignal();
    
    void getComputerSignalE(ComputerSet* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getCrumbSignalE(DefaultCrumbIssuer* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getJenkinsSignalE(Hudson* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getJobSignalE(FreeStyleProject* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getJobConfigSignalE(QString* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getJobLastBuildSignalE(FreeStyleBuild* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getJobProgressiveTextSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getQueueSignalE(Queue* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getQueueItemSignalE(Queue* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getViewSignalE(ListView* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getViewConfigSignalE(QString* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void headJenkinsSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postCreateItemSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postCreateViewSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobBuildSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobConfigSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobDeleteSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobDisableSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobEnableSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJobLastBuildStopSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void postViewConfigSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
