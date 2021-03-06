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
* RemoteAccessApiImpl.h
*
* 
*/

#ifndef REMOTE_ACCESS_API_IMPL_H_
#define REMOTE_ACCESS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <RemoteAccessApi.h>

#include "ComputerSet.h"
#include "DefaultCrumbIssuer.h"
#include "FreeStyleBuild.h"
#include "FreeStyleProject.h"
#include "Hudson.h"
#include "ListView.h"
#include "Queue.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class RemoteAccessApiImpl : public io::swagger::server::api::RemoteAccessApi {
public:
    RemoteAccessApiImpl(Pistache::Address addr);
    ~RemoteAccessApiImpl() { };

    void get_computer(const Optional<int32_t> &depth, Pistache::Http::ResponseWriter &response);
    void get_crumb(Pistache::Http::ResponseWriter &response);
    void get_jenkins(Pistache::Http::ResponseWriter &response);
    void get_job(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_config(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_last_build(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_progressive_text(const std::string &name, const std::string &number, const Optional<std::string> &start, Pistache::Http::ResponseWriter &response);
    void get_queue(Pistache::Http::ResponseWriter &response);
    void get_queue_item(const std::string &number, Pistache::Http::ResponseWriter &response);
    void get_view(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_view_config(const std::string &name, Pistache::Http::ResponseWriter &response);
    void head_jenkins(Pistache::Http::ResponseWriter &response);
    void post_create_item(const Optional<std::string> &name, const Optional<std::string> &from, const Optional<std::string> &mode, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, const Optional<Net::Http::Header::Raw> &contentType, Pistache::Http::ResponseWriter &response);
    void post_create_view(const Optional<std::string> &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, const Optional<Net::Http::Header::Raw> &contentType, Pistache::Http::ResponseWriter &response);
    void post_job_build(const std::string &name, const Optional<std::string> &json, const Optional<std::string> &token, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_config(const std::string &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_delete(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_disable(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_enable(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_last_build_stop(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_view_config(const std::string &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif