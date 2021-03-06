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


#include "PipelineStepImpllinks.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

PipelineStepImpllinks::PipelineStepImpllinks()
{
    m_SelfIsSet = false;
    m_ActionsIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

PipelineStepImpllinks::~PipelineStepImpllinks()
{
}

void PipelineStepImpllinks::validate()
{
    // TODO: implement validation
}

nlohmann::json PipelineStepImpllinks::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_SelfIsSet)
    {
        val["self"] = ModelBase::toJson(m_Self);
    }
    if(m_ActionsIsSet)
    {
        val["actions"] = ModelBase::toJson(m_Actions);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void PipelineStepImpllinks::fromJson(nlohmann::json& val)
{
    if(val.find("self") != val.end())
    {
        if(!val["self"].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val["self"]);
            setSelf( newItem );
        }
        
    }
    if(val.find("actions") != val.end())
    {
        if(!val["actions"].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val["actions"]);
            setActions( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    
}


std::shared_ptr<Link> PipelineStepImpllinks::getSelf() const
{
    return m_Self;
}
void PipelineStepImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool PipelineStepImpllinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void PipelineStepImpllinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::shared_ptr<Link> PipelineStepImpllinks::getActions() const
{
    return m_Actions;
}
void PipelineStepImpllinks::setActions(std::shared_ptr<Link> value)
{
    m_Actions = value;
    m_ActionsIsSet = true;
}
bool PipelineStepImpllinks::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void PipelineStepImpllinks::unsetActions()
{
    m_ActionsIsSet = false;
}
std::string PipelineStepImpllinks::getClass() const
{
    return m__class;
}
void PipelineStepImpllinks::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineStepImpllinks::classIsSet() const
{
    return m__classIsSet;
}
void PipelineStepImpllinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

