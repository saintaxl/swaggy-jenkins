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
package io.swagger.client.models

import io.swagger.client.models.AllView
import io.swagger.client.models.FreeStyleProject
import io.swagger.client.models.HudsonassignedLabels
import io.swagger.client.models.UnlabeledLoadStatistics

/**
 * 
 * @param _class 
 * @param assignedLabels 
 * @param mode 
 * @param nodeDescription 
 * @param nodeName 
 * @param numExecutors 
 * @param description 
 * @param jobs 
 * @param primaryView 
 * @param quietingDown 
 * @param slaveAgentPort 
 * @param unlabeledLoad 
 * @param useCrumbs 
 * @param useSecurity 
 * @param views 
 */
data class Hudson (
    val _class: kotlin.String? = null,
    val assignedLabels: kotlin.Array<HudsonassignedLabels>? = null,
    val mode: kotlin.String? = null,
    val nodeDescription: kotlin.String? = null,
    val nodeName: kotlin.String? = null,
    val numExecutors: kotlin.Int? = null,
    val description: kotlin.String? = null,
    val jobs: kotlin.Array<FreeStyleProject>? = null,
    val primaryView: AllView? = null,
    val quietingDown: kotlin.Boolean? = null,
    val slaveAgentPort: kotlin.Int? = null,
    val unlabeledLoad: UnlabeledLoadStatistics? = null,
    val useCrumbs: kotlin.Boolean? = null,
    val useSecurity: kotlin.Boolean? = null,
    val views: kotlin.Array<AllView>? = null
) {

}
