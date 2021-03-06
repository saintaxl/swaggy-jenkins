/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "PipelineRunImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PipelineRunImpl::PipelineRunImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_EnQueueTime = U("");
    m_EnQueueTimeIsSet = false;
    m_EndTime = U("");
    m_EndTimeIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Organization = U("");
    m_OrganizationIsSet = false;
    m_Pipeline = U("");
    m_PipelineIsSet = false;
    m_Result = U("");
    m_ResultIsSet = false;
    m_RunSummary = U("");
    m_RunSummaryIsSet = false;
    m_StartTime = U("");
    m_StartTimeIsSet = false;
    m_State = U("");
    m_StateIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_CommitId = U("");
    m_CommitIdIsSet = false;
}

PipelineRunImpl::~PipelineRunImpl()
{
}

void PipelineRunImpl::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
    }
    if(m_DurationInMillisIsSet)
    {
        val[U("durationInMillis")] = ModelBase::toJson(m_DurationInMillis);
    }
    if(m_EnQueueTimeIsSet)
    {
        val[U("enQueueTime")] = ModelBase::toJson(m_EnQueueTime);
    }
    if(m_EndTimeIsSet)
    {
        val[U("endTime")] = ModelBase::toJson(m_EndTime);
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val[U("estimatedDurationInMillis")] = ModelBase::toJson(m_EstimatedDurationInMillis);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_OrganizationIsSet)
    {
        val[U("organization")] = ModelBase::toJson(m_Organization);
    }
    if(m_PipelineIsSet)
    {
        val[U("pipeline")] = ModelBase::toJson(m_Pipeline);
    }
    if(m_ResultIsSet)
    {
        val[U("result")] = ModelBase::toJson(m_Result);
    }
    if(m_RunSummaryIsSet)
    {
        val[U("runSummary")] = ModelBase::toJson(m_RunSummary);
    }
    if(m_StartTimeIsSet)
    {
        val[U("startTime")] = ModelBase::toJson(m_StartTime);
    }
    if(m_StateIsSet)
    {
        val[U("state")] = ModelBase::toJson(m_State);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_CommitIdIsSet)
    {
        val[U("commitId")] = ModelBase::toJson(m_CommitId);
    }

    return val;
}

void PipelineRunImpl::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("_links")))
    {
        if(!val[U("_links")].is_null())
        {
            std::shared_ptr<PipelineRunImpllinks> newItem(new PipelineRunImpllinks());
            newItem->fromJson(val[U("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(U("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromJson(val[U("durationInMillis")]));
    }
    if(val.has_field(U("enQueueTime")))
    {
        setEnQueueTime(ModelBase::stringFromJson(val[U("enQueueTime")]));
    }
    if(val.has_field(U("endTime")))
    {
        setEndTime(ModelBase::stringFromJson(val[U("endTime")]));
    }
    if(val.has_field(U("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromJson(val[U("estimatedDurationInMillis")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[U("organization")]));
    }
    if(val.has_field(U("pipeline")))
    {
        setPipeline(ModelBase::stringFromJson(val[U("pipeline")]));
    }
    if(val.has_field(U("result")))
    {
        setResult(ModelBase::stringFromJson(val[U("result")]));
    }
    if(val.has_field(U("runSummary")))
    {
        setRunSummary(ModelBase::stringFromJson(val[U("runSummary")]));
    }
    if(val.has_field(U("startTime")))
    {
        setStartTime(ModelBase::stringFromJson(val[U("startTime")]));
    }
    if(val.has_field(U("state")))
    {
        setState(ModelBase::stringFromJson(val[U("state")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
    if(val.has_field(U("commitId")))
    {
        setCommitId(ModelBase::stringFromJson(val[U("commitId")]));
    }
}

void PipelineRunImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, U("_links."));
        }
        
    }
    if(m_DurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("durationInMillis"), m_DurationInMillis));
    }
    if(m_EnQueueTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("enQueueTime"), m_EnQueueTime));
        
    }
    if(m_EndTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("endTime"), m_EndTime));
        
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("estimatedDurationInMillis"), m_EstimatedDurationInMillis));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("organization"), m_Organization));
        
    }
    if(m_PipelineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("pipeline"), m_Pipeline));
        
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("result"), m_Result));
        
    }
    if(m_RunSummaryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("runSummary"), m_RunSummary));
        
    }
    if(m_StartTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("startTime"), m_StartTime));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state"), m_State));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_CommitIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("commitId"), m_CommitId));
        
    }
}

void PipelineRunImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("_links")))
    {
        if(multipart->hasContent(U("_links")))
        {
            std::shared_ptr<PipelineRunImpllinks> newItem(new PipelineRunImpllinks());
            newItem->fromMultiPart(multipart, U("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(U("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(U("durationInMillis"))));
    }
    if(multipart->hasContent(U("enQueueTime")))
    {
        setEnQueueTime(ModelBase::stringFromHttpContent(multipart->getContent(U("enQueueTime"))));
    }
    if(multipart->hasContent(U("endTime")))
    {
        setEndTime(ModelBase::stringFromHttpContent(multipart->getContent(U("endTime"))));
    }
    if(multipart->hasContent(U("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(U("estimatedDurationInMillis"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(U("organization"))));
    }
    if(multipart->hasContent(U("pipeline")))
    {
        setPipeline(ModelBase::stringFromHttpContent(multipart->getContent(U("pipeline"))));
    }
    if(multipart->hasContent(U("result")))
    {
        setResult(ModelBase::stringFromHttpContent(multipart->getContent(U("result"))));
    }
    if(multipart->hasContent(U("runSummary")))
    {
        setRunSummary(ModelBase::stringFromHttpContent(multipart->getContent(U("runSummary"))));
    }
    if(multipart->hasContent(U("startTime")))
    {
        setStartTime(ModelBase::stringFromHttpContent(multipart->getContent(U("startTime"))));
    }
    if(multipart->hasContent(U("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(U("state"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
    if(multipart->hasContent(U("commitId")))
    {
        setCommitId(ModelBase::stringFromHttpContent(multipart->getContent(U("commitId"))));
    }
}

utility::string_t PipelineRunImpl::getClass() const
{
    return m__class;
}


void PipelineRunImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineRunImpl::classIsSet() const
{
    return m__classIsSet;
}

void PipelineRunImpl::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<PipelineRunImpllinks> PipelineRunImpl::getLinks() const
{
    return m__links;
}


void PipelineRunImpl::setLinks(std::shared_ptr<PipelineRunImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool PipelineRunImpl::linksIsSet() const
{
    return m__linksIsSet;
}

void PipelineRunImpl::unset_links()
{
    m__linksIsSet = false;
}

int32_t PipelineRunImpl::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void PipelineRunImpl::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelineRunImpl::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void PipelineRunImpl::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

utility::string_t PipelineRunImpl::getEnQueueTime() const
{
    return m_EnQueueTime;
}


void PipelineRunImpl::setEnQueueTime(utility::string_t value)
{
    m_EnQueueTime = value;
    m_EnQueueTimeIsSet = true;
}
bool PipelineRunImpl::enQueueTimeIsSet() const
{
    return m_EnQueueTimeIsSet;
}

void PipelineRunImpl::unsetEnQueueTime()
{
    m_EnQueueTimeIsSet = false;
}

utility::string_t PipelineRunImpl::getEndTime() const
{
    return m_EndTime;
}


void PipelineRunImpl::setEndTime(utility::string_t value)
{
    m_EndTime = value;
    m_EndTimeIsSet = true;
}
bool PipelineRunImpl::endTimeIsSet() const
{
    return m_EndTimeIsSet;
}

void PipelineRunImpl::unsetEndTime()
{
    m_EndTimeIsSet = false;
}

int32_t PipelineRunImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}


void PipelineRunImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool PipelineRunImpl::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}

void PipelineRunImpl::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}

utility::string_t PipelineRunImpl::getId() const
{
    return m_Id;
}


void PipelineRunImpl::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineRunImpl::idIsSet() const
{
    return m_IdIsSet;
}

void PipelineRunImpl::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t PipelineRunImpl::getOrganization() const
{
    return m_Organization;
}


void PipelineRunImpl::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelineRunImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void PipelineRunImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}

utility::string_t PipelineRunImpl::getPipeline() const
{
    return m_Pipeline;
}


void PipelineRunImpl::setPipeline(utility::string_t value)
{
    m_Pipeline = value;
    m_PipelineIsSet = true;
}
bool PipelineRunImpl::pipelineIsSet() const
{
    return m_PipelineIsSet;
}

void PipelineRunImpl::unsetPipeline()
{
    m_PipelineIsSet = false;
}

utility::string_t PipelineRunImpl::getResult() const
{
    return m_Result;
}


void PipelineRunImpl::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelineRunImpl::resultIsSet() const
{
    return m_ResultIsSet;
}

void PipelineRunImpl::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t PipelineRunImpl::getRunSummary() const
{
    return m_RunSummary;
}


void PipelineRunImpl::setRunSummary(utility::string_t value)
{
    m_RunSummary = value;
    m_RunSummaryIsSet = true;
}
bool PipelineRunImpl::runSummaryIsSet() const
{
    return m_RunSummaryIsSet;
}

void PipelineRunImpl::unsetRunSummary()
{
    m_RunSummaryIsSet = false;
}

utility::string_t PipelineRunImpl::getStartTime() const
{
    return m_StartTime;
}


void PipelineRunImpl::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelineRunImpl::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void PipelineRunImpl::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

utility::string_t PipelineRunImpl::getState() const
{
    return m_State;
}


void PipelineRunImpl::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelineRunImpl::stateIsSet() const
{
    return m_StateIsSet;
}

void PipelineRunImpl::unsetState()
{
    m_StateIsSet = false;
}

utility::string_t PipelineRunImpl::getType() const
{
    return m_Type;
}


void PipelineRunImpl::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool PipelineRunImpl::typeIsSet() const
{
    return m_TypeIsSet;
}

void PipelineRunImpl::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t PipelineRunImpl::getCommitId() const
{
    return m_CommitId;
}


void PipelineRunImpl::setCommitId(utility::string_t value)
{
    m_CommitId = value;
    m_CommitIdIsSet = true;
}
bool PipelineRunImpl::commitIdIsSet() const
{
    return m_CommitIdIsSet;
}

void PipelineRunImpl::unsetCommitId()
{
    m_CommitIdIsSet = false;
}

}
}
}
}

