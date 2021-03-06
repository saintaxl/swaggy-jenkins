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


#include "Body.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

Body::Body()
{
    m_Favorite = false;
    
}

Body::~Body()
{
}

void Body::validate()
{
    // TODO: implement validation
}

nlohmann::json Body::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["favorite"] = m_Favorite;
    

    return val;
}

void Body::fromJson(nlohmann::json& val)
{
    setFavorite(val.at("favorite"));
    
}


bool Body::getFavorite() const
{
    return m_Favorite;
}
void Body::setFavorite(bool value)
{
    m_Favorite = value;
    
}

}
}
}
}

