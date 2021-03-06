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

import io.swagger.client.models.FreeStyleBuild
import io.swagger.client.models.FreeStyleProjectactions
import io.swagger.client.models.FreeStyleProjecthealthReport
import io.swagger.client.models.NullSCM

/**
 * 
 * @param _class 
 * @param name 
 * @param url 
 * @param color 
 * @param actions 
 * @param description 
 * @param displayName 
 * @param displayNameOrNull 
 * @param fullDisplayName 
 * @param fullName 
 * @param buildable 
 * @param builds 
 * @param firstBuild 
 * @param healthReport 
 * @param inQueue 
 * @param keepDependencies 
 * @param lastBuild 
 * @param lastCompletedBuild 
 * @param lastFailedBuild 
 * @param lastStableBuild 
 * @param lastSuccessfulBuild 
 * @param lastUnstableBuild 
 * @param lastUnsuccessfulBuild 
 * @param nextBuildNumber 
 * @param queueItem 
 * @param concurrentBuild 
 * @param scm 
 */
data class FreeStyleProject (
    val _class: kotlin.String? = null,
    val name: kotlin.String? = null,
    val url: kotlin.String? = null,
    val color: kotlin.String? = null,
    val actions: kotlin.Array<FreeStyleProjectactions>? = null,
    val description: kotlin.String? = null,
    val displayName: kotlin.String? = null,
    val displayNameOrNull: kotlin.String? = null,
    val fullDisplayName: kotlin.String? = null,
    val fullName: kotlin.String? = null,
    val buildable: kotlin.Boolean? = null,
    val builds: kotlin.Array<FreeStyleBuild>? = null,
    val firstBuild: FreeStyleBuild? = null,
    val healthReport: kotlin.Array<FreeStyleProjecthealthReport>? = null,
    val inQueue: kotlin.Boolean? = null,
    val keepDependencies: kotlin.Boolean? = null,
    val lastBuild: FreeStyleBuild? = null,
    val lastCompletedBuild: FreeStyleBuild? = null,
    val lastFailedBuild: kotlin.String? = null,
    val lastStableBuild: FreeStyleBuild? = null,
    val lastSuccessfulBuild: FreeStyleBuild? = null,
    val lastUnstableBuild: kotlin.String? = null,
    val lastUnsuccessfulBuild: kotlin.String? = null,
    val nextBuildNumber: kotlin.Int? = null,
    val queueItem: kotlin.String? = null,
    val concurrentBuild: kotlin.Boolean? = null,
    val scm: NullSCM? = null
) {

}
