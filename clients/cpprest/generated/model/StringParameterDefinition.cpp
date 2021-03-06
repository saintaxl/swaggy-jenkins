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



#include "StringParameterDefinition.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StringParameterDefinition::StringParameterDefinition()
{
    m__class = U("");
    m__classIsSet = false;
    m_DefaultParameterValueIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

StringParameterDefinition::~StringParameterDefinition()
{
}

void StringParameterDefinition::validate()
{
    // TODO: implement validation
}

web::json::value StringParameterDefinition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DefaultParameterValueIsSet)
    {
        val[U("defaultParameterValue")] = ModelBase::toJson(m_DefaultParameterValue);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void StringParameterDefinition::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("defaultParameterValue")))
    {
        if(!val[U("defaultParameterValue")].is_null())
        {
            std::shared_ptr<StringParameterValue> newItem(new StringParameterValue());
            newItem->fromJson(val[U("defaultParameterValue")]);
            setDefaultParameterValue( newItem );
        }
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void StringParameterDefinition::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DefaultParameterValueIsSet)
    {
        if (m_DefaultParameterValue.get())
        {
            m_DefaultParameterValue->toMultipart(multipart, U("defaultParameterValue."));
        }
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void StringParameterDefinition::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("defaultParameterValue")))
    {
        if(multipart->hasContent(U("defaultParameterValue")))
        {
            std::shared_ptr<StringParameterValue> newItem(new StringParameterValue());
            newItem->fromMultiPart(multipart, U("defaultParameterValue."));
            setDefaultParameterValue( newItem );
        }
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

utility::string_t StringParameterDefinition::getClass() const
{
    return m__class;
}


void StringParameterDefinition::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool StringParameterDefinition::classIsSet() const
{
    return m__classIsSet;
}

void StringParameterDefinition::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<StringParameterValue> StringParameterDefinition::getDefaultParameterValue() const
{
    return m_DefaultParameterValue;
}


void StringParameterDefinition::setDefaultParameterValue(std::shared_ptr<StringParameterValue> value)
{
    m_DefaultParameterValue = value;
    m_DefaultParameterValueIsSet = true;
}
bool StringParameterDefinition::defaultParameterValueIsSet() const
{
    return m_DefaultParameterValueIsSet;
}

void StringParameterDefinition::unsetDefaultParameterValue()
{
    m_DefaultParameterValueIsSet = false;
}

utility::string_t StringParameterDefinition::getDescription() const
{
    return m_Description;
}


void StringParameterDefinition::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool StringParameterDefinition::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void StringParameterDefinition::unsetDescription()
{
    m_DescriptionIsSet = false;
}

utility::string_t StringParameterDefinition::getName() const
{
    return m_Name;
}


void StringParameterDefinition::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool StringParameterDefinition::nameIsSet() const
{
    return m_NameIsSet;
}

void StringParameterDefinition::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t StringParameterDefinition::getType() const
{
    return m_Type;
}


void StringParameterDefinition::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool StringParameterDefinition::typeIsSet() const
{
    return m_TypeIsSet;
}

void StringParameterDefinition::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

