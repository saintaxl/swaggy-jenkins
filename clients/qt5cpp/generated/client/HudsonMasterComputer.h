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
 * HudsonMasterComputer.h
 * 
 * 
 */

#ifndef HudsonMasterComputer_H_
#define HudsonMasterComputer_H_

#include <QJsonObject>


#include "HudsonMasterComputerexecutors.h"
#include "HudsonMasterComputermonitorData.h"
#include "Label1.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class HudsonMasterComputer: public SWGObject {
public:
    HudsonMasterComputer();
    HudsonMasterComputer(QString* json);
    virtual ~HudsonMasterComputer();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    HudsonMasterComputer* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    QList<HudsonMasterComputerexecutors*>* getExecutors();
    void setExecutors(QList<HudsonMasterComputerexecutors*>* executors);

    QString* getIcon();
    void setIcon(QString* icon);

    QString* getIconClassName();
    void setIconClassName(QString* icon_class_name);

    bool getIdle();
    void setIdle(bool idle);

    bool getJnlpAgent();
    void setJnlpAgent(bool jnlp_agent);

    bool getLaunchSupported();
    void setLaunchSupported(bool launch_supported);

    Label1* getLoadStatistics();
    void setLoadStatistics(Label1* load_statistics);

    bool getManualLaunchAllowed();
    void setManualLaunchAllowed(bool manual_launch_allowed);

    HudsonMasterComputermonitorData* getMonitorData();
    void setMonitorData(HudsonMasterComputermonitorData* monitor_data);

    qint32 getNumExecutors();
    void setNumExecutors(qint32 num_executors);

    bool getOffline();
    void setOffline(bool offline);

    QString* getOfflineCause();
    void setOfflineCause(QString* offline_cause);

    QString* getOfflineCauseReason();
    void setOfflineCauseReason(QString* offline_cause_reason);

    bool getTemporarilyOffline();
    void setTemporarilyOffline(bool temporarily_offline);


private:
    QString* _class;
    QString* display_name;
    QList<HudsonMasterComputerexecutors*>* executors;
    QString* icon;
    QString* icon_class_name;
    bool idle;
    bool jnlp_agent;
    bool launch_supported;
    Label1* load_statistics;
    bool manual_launch_allowed;
    HudsonMasterComputermonitorData* monitor_data;
    qint32 num_executors;
    bool offline;
    QString* offline_cause;
    QString* offline_cause_reason;
    bool temporarily_offline;
};

}

#endif /* HudsonMasterComputer_H_ */
