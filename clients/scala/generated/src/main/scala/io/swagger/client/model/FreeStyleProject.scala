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

package io.swagger.client.model


case class FreeStyleProject (
  _class: Option[String],
  name: Option[String],
  url: Option[String],
  color: Option[String],
  actions: Option[List[FreeStyleProjectactions]],
  description: Option[String],
  displayName: Option[String],
  displayNameOrNull: Option[String],
  fullDisplayName: Option[String],
  fullName: Option[String],
  buildable: Option[Boolean],
  builds: Option[List[FreeStyleBuild]],
  firstBuild: Option[FreeStyleBuild],
  healthReport: Option[List[FreeStyleProjecthealthReport]],
  inQueue: Option[Boolean],
  keepDependencies: Option[Boolean],
  lastBuild: Option[FreeStyleBuild],
  lastCompletedBuild: Option[FreeStyleBuild],
  lastFailedBuild: Option[String],
  lastStableBuild: Option[FreeStyleBuild],
  lastSuccessfulBuild: Option[FreeStyleBuild],
  lastUnstableBuild: Option[String],
  lastUnsuccessfulBuild: Option[String],
  nextBuildNumber: Option[Integer],
  queueItem: Option[String],
  concurrentBuild: Option[Boolean],
  scm: Option[NullSCM]
)
