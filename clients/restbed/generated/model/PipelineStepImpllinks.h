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

/*
 * PipelineStepImpllinks.h
 *
 * 
 */

#ifndef PipelineStepImpllinks_H_
#define PipelineStepImpllinks_H_



#include <string>
#include "Link.h"
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineStepImpllinks
{
public:
    PipelineStepImpllinks();
    virtual ~PipelineStepImpllinks();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineStepImpllinks members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getActions() const;
    void setActions(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<Link> m_Self;
    std::shared_ptr<Link> m_Actions;
    std::string m__class;
};

}
}
}
}

#endif /* PipelineStepImpllinks_H_ */
