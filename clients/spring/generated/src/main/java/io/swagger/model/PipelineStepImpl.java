package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.InputStepImpl;
import io.swagger.model.PipelineStepImpllinks;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * PipelineStepImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-08-03T23:37:43.850Z")

public class PipelineStepImpl   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("_links")
  private PipelineStepImpllinks links = null;

  @JsonProperty("displayName")
  private String displayName = null;

  @JsonProperty("durationInMillis")
  private Integer durationInMillis = null;

  @JsonProperty("id")
  private String id = null;

  @JsonProperty("input")
  private InputStepImpl input = null;

  @JsonProperty("result")
  private String result = null;

  @JsonProperty("startTime")
  private String startTime = null;

  @JsonProperty("state")
  private String state = null;

  public PipelineStepImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")


  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public PipelineStepImpl links(PipelineStepImpllinks links) {
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(value = "")

  @Valid

  public PipelineStepImpllinks getLinks() {
    return links;
  }

  public void setLinks(PipelineStepImpllinks links) {
    this.links = links;
  }

  public PipelineStepImpl displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

   /**
   * Get displayName
   * @return displayName
  **/
  @ApiModelProperty(value = "")


  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public PipelineStepImpl durationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
    return this;
  }

   /**
   * Get durationInMillis
   * @return durationInMillis
  **/
  @ApiModelProperty(value = "")


  public Integer getDurationInMillis() {
    return durationInMillis;
  }

  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  public PipelineStepImpl id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")


  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public PipelineStepImpl input(InputStepImpl input) {
    this.input = input;
    return this;
  }

   /**
   * Get input
   * @return input
  **/
  @ApiModelProperty(value = "")

  @Valid

  public InputStepImpl getInput() {
    return input;
  }

  public void setInput(InputStepImpl input) {
    this.input = input;
  }

  public PipelineStepImpl result(String result) {
    this.result = result;
    return this;
  }

   /**
   * Get result
   * @return result
  **/
  @ApiModelProperty(value = "")


  public String getResult() {
    return result;
  }

  public void setResult(String result) {
    this.result = result;
  }

  public PipelineStepImpl startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Get startTime
   * @return startTime
  **/
  @ApiModelProperty(value = "")


  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  public PipelineStepImpl state(String state) {
    this.state = state;
    return this;
  }

   /**
   * Get state
   * @return state
  **/
  @ApiModelProperty(value = "")


  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineStepImpl pipelineStepImpl = (PipelineStepImpl) o;
    return Objects.equals(this.propertyClass, pipelineStepImpl.propertyClass) &&
        Objects.equals(this.links, pipelineStepImpl.links) &&
        Objects.equals(this.displayName, pipelineStepImpl.displayName) &&
        Objects.equals(this.durationInMillis, pipelineStepImpl.durationInMillis) &&
        Objects.equals(this.id, pipelineStepImpl.id) &&
        Objects.equals(this.input, pipelineStepImpl.input) &&
        Objects.equals(this.result, pipelineStepImpl.result) &&
        Objects.equals(this.startTime, pipelineStepImpl.startTime) &&
        Objects.equals(this.state, pipelineStepImpl.state);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, displayName, durationInMillis, id, input, result, startTime, state);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineStepImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    durationInMillis: ").append(toIndentedString(durationInMillis)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    input: ").append(toIndentedString(input)).append("\n");
    sb.append("    result: ").append(toIndentedString(result)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

