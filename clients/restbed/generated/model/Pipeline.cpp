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



#include "Pipeline.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

Pipeline::Pipeline()
{
    m__class = "";
    m_Organization = "";
    m_Name = "";
    m_DisplayName = "";
    m_FullName = "";
    m_WeatherScore = 0;
    m_EstimatedDurationInMillis = 0;
    
}

Pipeline::~Pipeline()
{
}

std::string Pipeline::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Organization", m_Organization);
	pt.put("Name", m_Name);
	pt.put("DisplayName", m_DisplayName);
	pt.put("FullName", m_FullName);
	pt.put("WeatherScore", m_WeatherScore);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	write_json(ss, pt, false);
	return ss.str();
}

void Pipeline::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Organization = pt.get("Organization", "");
	m_Name = pt.get("Name", "");
	m_DisplayName = pt.get("DisplayName", "");
	m_FullName = pt.get("FullName", "");
	m_WeatherScore = pt.get("WeatherScore", 0);
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
}

std::string Pipeline::getClass() const
{
    return m__class;
}
void Pipeline::setClass(std::string value)
{
    m__class = value;
}
std::string Pipeline::getOrganization() const
{
    return m_Organization;
}
void Pipeline::setOrganization(std::string value)
{
    m_Organization = value;
}
std::string Pipeline::getName() const
{
    return m_Name;
}
void Pipeline::setName(std::string value)
{
    m_Name = value;
}
std::string Pipeline::getDisplayName() const
{
    return m_DisplayName;
}
void Pipeline::setDisplayName(std::string value)
{
    m_DisplayName = value;
}
std::string Pipeline::getFullName() const
{
    return m_FullName;
}
void Pipeline::setFullName(std::string value)
{
    m_FullName = value;
}
int32_t Pipeline::getWeatherScore() const
{
    return m_WeatherScore;
}
void Pipeline::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
}
int32_t Pipeline::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void Pipeline::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::shared_ptr<PipelinelatestRun> Pipeline::getLatestRun() const
{
    return m_LatestRun;
}
void Pipeline::setLatestRun(std::shared_ptr<PipelinelatestRun> value)
{
    m_LatestRun = value;
}

}
}
}
}
