<?php
/**
 * BlueOceanApiInterface
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Server
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Server\Api;

use Swagger\Server\Model\MultibranchPipeline;
use Swagger\Server\Model\FavoriteImpl;
use string;
use Symfony\Component\HttpKernel\Exception\UnauthorizedHttpException;
use Swagger\Server\Model\Organisation;
use Swagger\Server\Model\User;
use Swagger\Server\Model\PipelineRuns;
use Swagger\Server\Model\PipelineRun;
use Swagger\Server\Model\PipelineQueue;
use Swagger\Server\Model\PipelineRunNodes;
use Swagger\Server\Model\PipelineImpl;
use Swagger\Server\Model\UserFavorites;
use Swagger\Server\Model\Body;
use Swagger\Server\Model\PipelineActivities;
use Swagger\Server\Model\BranchImpl;
use Symfony\Component\HttpKernel\Exception\NotFoundHttpException;
use Swagger\Server\Model\PipelineFolderImpl;
use Symfony\Component\HttpKernel\Exception\AccessDeniedHttpException;
use Swagger\Server\Model\PipelineStepImpl;
use Swagger\Server\Model\Pipeline;
use Swagger\Server\Model\Organisations;
use Swagger\Server\Model\GithubScm;
use Swagger\Server\Model\PipelineRunNode;
use Swagger\Server\Model\Pipelines;
use Swagger\Server\Model\QueueItemImpl;
use Swagger\Server\Model\PipelineRunNodeSteps;
use Swagger\Server\Model\ScmOrganisations;

/**
 * BlueOceanApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  Swagger\Server\Api
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
interface BlueOceanApiInterface
{

    /**
     * Sets authentication method jenkins_auth
     *
     * @param string $value Value of the jenkins_auth authentication method.
     *
     * @return void
     */
    public function setjenkins_auth($value);

    /**
     * Operation deletePipelineQueueItem
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $queue  Name of the queue item (required)
     *
     * @return void  Successfully deleted queue item
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function deletePipelineQueueItem($organization, $pipeline, $queue);

    /**
     * Operation getAuthenticatedUser
     *
     * @param  string $organization  Name of the organization (required)
     *
     * @return User  Successfully retrieved authenticated user details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getAuthenticatedUser($organization);

    /**
     * Operation getClasses
     *
     * @param  string $class  Name of the class (required)
     *
     * @return string  Successfully retrieved class names
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getClasses($class);

    /**
     * Operation getOrganisation
     *
     * @param  string $organization  Name of the organization (required)
     *
     * @return Organisation  Successfully retrieved pipeline details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     * @throws NotFoundHttpException  Pipeline cannot be found on Jenkins instance
     */
    public function getOrganisation($organization);

    /**
     * Operation getOrganisations
     *
     *
     * @return Organisations  Successfully retrieved pipelines details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getOrganisations();

    /**
     * Operation getPipeline
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return Pipeline  Successfully retrieved pipeline details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     * @throws NotFoundHttpException  Pipeline cannot be found on Jenkins instance
     */
    public function getPipeline($organization, $pipeline);

    /**
     * Operation getPipelineActivities
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return PipelineActivities  Successfully retrieved all activities details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineActivities($organization, $pipeline);

    /**
     * Operation getPipelineBranch
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $branch  Name of the branch (required)
     *
     * @return BranchImpl  Successfully retrieved branch details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineBranch($organization, $pipeline, $branch);

    /**
     * Operation getPipelineBranchRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $branch  Name of the branch (required)
     * @param  string $run  Name of the run (required)
     *
     * @return PipelineRun  Successfully retrieved run details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineBranchRun($organization, $pipeline, $branch, $run);

    /**
     * Operation getPipelineBranches
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return MultibranchPipeline  Successfully retrieved all branches details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineBranches($organization, $pipeline);

    /**
     * Operation getPipelineFolder
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $folder  Name of the folder (required)
     *
     * @return PipelineFolderImpl  Successfully retrieved folder details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineFolder($organization, $folder);

    /**
     * Operation getPipelineFolderPipeline
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $folder  Name of the folder (required)
     *
     * @return PipelineImpl  Successfully retrieved pipeline details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineFolderPipeline($organization, $pipeline, $folder);

    /**
     * Operation getPipelineQueue
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return PipelineQueue  Successfully retrieved queue details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineQueue($organization, $pipeline);

    /**
     * Operation getPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     *
     * @return PipelineRun  Successfully retrieved run details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRun($organization, $pipeline, $run);

    /**
     * Operation getPipelineRunLog
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  int $start  Start position of the log (optional)
     * @param  bool $download  Set to true in order to download the file, otherwise it&#39;s passed as a response body (optional)
     *
     * @return string  Successfully retrieved pipeline run log
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunLog($organization, $pipeline, $run, $start = null, $download = null);

    /**
     * Operation getPipelineRunNode
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     *
     * @return PipelineRunNode  Successfully retrieved run node details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunNode($organization, $pipeline, $run, $node);

    /**
     * Operation getPipelineRunNodeStep
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  string $step  Name of the step (required)
     *
     * @return PipelineStepImpl  Successfully retrieved run node step details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunNodeStep($organization, $pipeline, $run, $node, $step);

    /**
     * Operation getPipelineRunNodeStepLog
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  string $step  Name of the step (required)
     *
     * @return string  Successfully retrieved pipeline run node step log
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunNodeStepLog($organization, $pipeline, $run, $node, $step);

    /**
     * Operation getPipelineRunNodeSteps
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     *
     * @return PipelineRunNodeSteps  Successfully retrieved run node steps details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunNodeSteps($organization, $pipeline, $run, $node);

    /**
     * Operation getPipelineRunNodes
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     *
     * @return PipelineRunNodes  Successfully retrieved run nodes details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRunNodes($organization, $pipeline, $run);

    /**
     * Operation getPipelineRuns
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return PipelineRuns  Successfully retrieved runs details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelineRuns($organization, $pipeline);

    /**
     * Operation getPipelines
     *
     * @param  string $organization  Name of the organization (required)
     *
     * @return Pipelines  Successfully retrieved pipelines details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getPipelines($organization);

    /**
     * Operation getSCM
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     *
     * @return GithubScm  Successfully retrieved SCM details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getSCM($organization, $scm);

    /**
     * Operation getSCMOrganisationRepositories
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $scm_organisation  Name of the SCM organization (required)
     * @param  string $credential_id  Credential ID (optional)
     * @param  int $page_size  Number of items in a page (optional)
     * @param  int $page_number  Page number (optional)
     *
     * @return ScmOrganisations  Successfully retrieved SCM organization repositories details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getSCMOrganisationRepositories($organization, $scm, $scm_organisation, $credential_id = null, $page_size = null, $page_number = null);

    /**
     * Operation getSCMOrganisationRepository
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $scm_organisation  Name of the SCM organization (required)
     * @param  string $repository  Name of the SCM repository (required)
     * @param  string $credential_id  Credential ID (optional)
     *
     * @return ScmOrganisations  Successfully retrieved SCM organizations details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getSCMOrganisationRepository($organization, $scm, $scm_organisation, $repository, $credential_id = null);

    /**
     * Operation getSCMOrganisations
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $credential_id  Credential ID (optional)
     *
     * @return ScmOrganisations  Successfully retrieved SCM organizations details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getSCMOrganisations($organization, $scm, $credential_id = null);

    /**
     * Operation getUser
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $user  Name of the user (required)
     *
     * @return User  Successfully retrieved users details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getUser($organization, $user);

    /**
     * Operation getUserFavorites
     *
     * @param  string $user  Name of the user (required)
     *
     * @return UserFavorites  Successfully retrieved users favorites details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getUserFavorites($user);

    /**
     * Operation getUsers
     *
     * @param  string $organization  Name of the organization (required)
     *
     * @return User  Successfully retrieved users details
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function getUsers($organization);

    /**
     * Operation postPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     *
     * @return QueueItemImpl  Successfully replayed a pipeline run
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function postPipelineRun($organization, $pipeline, $run);

    /**
     * Operation postPipelineRuns
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     *
     * @return QueueItemImpl  Successfully started a build
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function postPipelineRuns($organization, $pipeline);

    /**
     * Operation putPipelineFavorite
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  Body $body  Set JSON string body to {\&quot;favorite\&quot;: true} to favorite, set value to false to unfavorite (required)
     *
     * @return FavoriteImpl  Successfully favorited/unfavorited a pipeline
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function putPipelineFavorite($organization, $pipeline, Body $body);

    /**
     * Operation putPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $blocking  Set to true to make blocking stop, default: false (optional)
     * @param  int $time_out_in_secs  Timeout in seconds, default: 10 seconds (optional)
     *
     * @return PipelineRun  Successfully stopped a build
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function putPipelineRun($organization, $pipeline, $run, $blocking = null, $time_out_in_secs = null);

    /**
     * Operation search
     *
     * @param  string $q  Query string (required)
     *
     * @return string  Successfully retrieved search result
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function search($q);

    /**
     * Operation searchClasses
     *
     * @param  string $q  Query string containing an array of class names (required)
     *
     * @return string  Successfully retrieved search result
     *
     * @throws UnauthorizedHttpException  Authentication failed - incorrect username and/or password
     * @throws AccessDeniedHttpException  Jenkins requires authentication - please set username and password
     */
    public function searchClasses($q);
}