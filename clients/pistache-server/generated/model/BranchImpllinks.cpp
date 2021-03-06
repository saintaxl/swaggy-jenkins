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


#include "BranchImpllinks.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

BranchImpllinks::BranchImpllinks()
{
    m_SelfIsSet = false;
    m_ActionsIsSet = false;
    m_RunsIsSet = false;
    m_QueueIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

BranchImpllinks::~BranchImpllinks()
{
}

void BranchImpllinks::validate()
{
    // TODO: implement validation
}

nlohmann::json BranchImpllinks::toJson() const
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
    if(m_RunsIsSet)
    {
        val["runs"] = ModelBase::toJson(m_Runs);
    }
    if(m_QueueIsSet)
    {
        val["queue"] = ModelBase::toJson(m_Queue);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void BranchImpllinks::fromJson(nlohmann::json& val)
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
    if(val.find("runs") != val.end())
    {
        if(!val["runs"].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val["runs"]);
            setRuns( newItem );
        }
        
    }
    if(val.find("queue") != val.end())
    {
        if(!val["queue"].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val["queue"]);
            setQueue( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    
}


std::shared_ptr<Link> BranchImpllinks::getSelf() const
{
    return m_Self;
}
void BranchImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool BranchImpllinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void BranchImpllinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::shared_ptr<Link> BranchImpllinks::getActions() const
{
    return m_Actions;
}
void BranchImpllinks::setActions(std::shared_ptr<Link> value)
{
    m_Actions = value;
    m_ActionsIsSet = true;
}
bool BranchImpllinks::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void BranchImpllinks::unsetActions()
{
    m_ActionsIsSet = false;
}
std::shared_ptr<Link> BranchImpllinks::getRuns() const
{
    return m_Runs;
}
void BranchImpllinks::setRuns(std::shared_ptr<Link> value)
{
    m_Runs = value;
    m_RunsIsSet = true;
}
bool BranchImpllinks::runsIsSet() const
{
    return m_RunsIsSet;
}
void BranchImpllinks::unsetRuns()
{
    m_RunsIsSet = false;
}
std::shared_ptr<Link> BranchImpllinks::getQueue() const
{
    return m_Queue;
}
void BranchImpllinks::setQueue(std::shared_ptr<Link> value)
{
    m_Queue = value;
    m_QueueIsSet = true;
}
bool BranchImpllinks::queueIsSet() const
{
    return m_QueueIsSet;
}
void BranchImpllinks::unsetQueue()
{
    m_QueueIsSet = false;
}
std::string BranchImpllinks::getClass() const
{
    return m__class;
}
void BranchImpllinks::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool BranchImpllinks::classIsSet() const
{
    return m__classIsSet;
}
void BranchImpllinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

