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

import * as models from './models';

export interface HudsonmodelHudson {
    class?: string;

    assignedLabels?: Array<models.HudsonmodelHudsonassignedLabels>;

    mode?: string;

    nodeDescription?: string;

    nodeName?: string;

    numExecutors?: number;

    description?: string;

    jobs?: Array<models.HudsonmodelFreeStyleProject>;

    primaryView?: models.HudsonmodelAllView;

    quietingDown?: boolean;

    slaveAgentPort?: number;

    unlabeledLoad?: models.JenkinsmodelUnlabeledLoadStatistics;

    useCrumbs?: boolean;

    useSecurity?: boolean;

    views?: Array<models.HudsonmodelAllView>;

}
