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
 * ExtensionClassImpl.h
 *
 * 
 */

#ifndef ExtensionClassImpl_H_
#define ExtensionClassImpl_H_


#include "ModelBase.h"

#include "ExtensionClassImpllinks.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassImpl
    : public ModelBase
{
public:
    ExtensionClassImpl();
    virtual ~ExtensionClassImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExtensionClassImpl members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpllinks> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<ExtensionClassImpllinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getClasses();
    bool classesIsSet() const;
    void unsetClasses();
    void setClasses(std::vector<utility::string_t> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::shared_ptr<ExtensionClassImpllinks> m__links;
    bool m__linksIsSet;
    std::vector<utility::string_t> m_Classes;
    bool m_ClassesIsSet;
};

}
}
}
}

#endif /* ExtensionClassImpl_H_ */
