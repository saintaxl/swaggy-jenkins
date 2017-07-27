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
 * IojenkinsblueoceanserviceembeddedrestExtensionClassImpl.h
 *
 * 
 */

#ifndef IojenkinsblueoceanserviceembeddedrestExtensionClassImpl_H_
#define IojenkinsblueoceanserviceembeddedrestExtensionClassImpl_H_


#include "ModelBase.h"

#include "IojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
    : public ModelBase
{
public:
    IojenkinsblueoceanserviceembeddedrestExtensionClassImpl();
    virtual ~IojenkinsblueoceanserviceembeddedrestExtensionClassImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IojenkinsblueoceanserviceembeddedrestExtensionClassImpl members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<IojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links> getLinks() const;
    void setLinks(std::shared_ptr<IojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links> value);
    bool _linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getClasses();
    bool classesIsSet() const;
    void unsetClasses();

protected:
    utility::string_t m__class;
    bool m__classIsSet;
std::shared_ptr<IojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links> m__links;
    bool m__linksIsSet;
std::vector<utility::string_t> m_Classes;
    bool m_ClassesIsSet;
};

}
}
}
}

#endif /* IojenkinsblueoceanserviceembeddedrestExtensionClassImpl_H_ */