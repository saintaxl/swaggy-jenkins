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



#include "QueueItemImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

QueueItemImpl::QueueItemImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m_ExpectedBuildNumber = 0;
    m_ExpectedBuildNumberIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Pipeline = U("");
    m_PipelineIsSet = false;
    m_QueuedTime = 0;
    m_QueuedTimeIsSet = false;
}

QueueItemImpl::~QueueItemImpl()
{
}

void QueueItemImpl::validate()
{
    // TODO: implement validation
}

web::json::value QueueItemImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_ExpectedBuildNumberIsSet)
    {
        val[U("expectedBuildNumber")] = ModelBase::toJson(m_ExpectedBuildNumber);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_PipelineIsSet)
    {
        val[U("pipeline")] = ModelBase::toJson(m_Pipeline);
    }
    if(m_QueuedTimeIsSet)
    {
        val[U("queuedTime")] = ModelBase::toJson(m_QueuedTime);
    }

    return val;
}

void QueueItemImpl::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("expectedBuildNumber")))
    {
        setExpectedBuildNumber(ModelBase::int32_tFromJson(val[U("expectedBuildNumber")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("pipeline")))
    {
        setPipeline(ModelBase::stringFromJson(val[U("pipeline")]));
    }
    if(val.has_field(U("queuedTime")))
    {
        setQueuedTime(ModelBase::int32_tFromJson(val[U("queuedTime")]));
    }
}

void QueueItemImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ExpectedBuildNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expectedBuildNumber"), m_ExpectedBuildNumber));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_PipelineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("pipeline"), m_Pipeline));
        
    }
    if(m_QueuedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("queuedTime"), m_QueuedTime));
    }
}

void QueueItemImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("expectedBuildNumber")))
    {
        setExpectedBuildNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(U("expectedBuildNumber"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("pipeline")))
    {
        setPipeline(ModelBase::stringFromHttpContent(multipart->getContent(U("pipeline"))));
    }
    if(multipart->hasContent(U("queuedTime")))
    {
        setQueuedTime(ModelBase::int32_tFromHttpContent(multipart->getContent(U("queuedTime"))));
    }
}

utility::string_t QueueItemImpl::getClass() const
{
    return m__class;
}


void QueueItemImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool QueueItemImpl::classIsSet() const
{
    return m__classIsSet;
}

void QueueItemImpl::unset_class()
{
    m__classIsSet = false;
}

int32_t QueueItemImpl::getExpectedBuildNumber() const
{
    return m_ExpectedBuildNumber;
}


void QueueItemImpl::setExpectedBuildNumber(int32_t value)
{
    m_ExpectedBuildNumber = value;
    m_ExpectedBuildNumberIsSet = true;
}
bool QueueItemImpl::expectedBuildNumberIsSet() const
{
    return m_ExpectedBuildNumberIsSet;
}

void QueueItemImpl::unsetExpectedBuildNumber()
{
    m_ExpectedBuildNumberIsSet = false;
}

utility::string_t QueueItemImpl::getId() const
{
    return m_Id;
}


void QueueItemImpl::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool QueueItemImpl::idIsSet() const
{
    return m_IdIsSet;
}

void QueueItemImpl::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t QueueItemImpl::getPipeline() const
{
    return m_Pipeline;
}


void QueueItemImpl::setPipeline(utility::string_t value)
{
    m_Pipeline = value;
    m_PipelineIsSet = true;
}
bool QueueItemImpl::pipelineIsSet() const
{
    return m_PipelineIsSet;
}

void QueueItemImpl::unsetPipeline()
{
    m_PipelineIsSet = false;
}

int32_t QueueItemImpl::getQueuedTime() const
{
    return m_QueuedTime;
}


void QueueItemImpl::setQueuedTime(int32_t value)
{
    m_QueuedTime = value;
    m_QueuedTimeIsSet = true;
}
bool QueueItemImpl::queuedTimeIsSet() const
{
    return m_QueuedTimeIsSet;
}

void QueueItemImpl::unsetQueuedTime()
{
    m_QueuedTimeIsSet = false;
}

}
}
}
}

