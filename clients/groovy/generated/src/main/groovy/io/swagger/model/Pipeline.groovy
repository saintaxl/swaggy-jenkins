package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.PipelinelatestRun;
@Canonical
class Pipeline {

    String propertyClass = null

    String organization = null

    String name = null

    String displayName = null

    String fullName = null

    Integer weatherScore = null

    Integer estimatedDurationInMillis = null

    PipelinelatestRun latestRun = null
  

}

