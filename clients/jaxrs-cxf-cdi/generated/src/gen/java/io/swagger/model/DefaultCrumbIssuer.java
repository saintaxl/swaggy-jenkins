package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class DefaultCrumbIssuer   {
  
  private String propertyClass = null;
  private String crumb = null;
  private String crumbRequestField = null;

  /**
   **/
  public DefaultCrumbIssuer propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  /**
   **/
  public DefaultCrumbIssuer crumb(String crumb) {
    this.crumb = crumb;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("crumb")
  public String getCrumb() {
    return crumb;
  }
  public void setCrumb(String crumb) {
    this.crumb = crumb;
  }

  /**
   **/
  public DefaultCrumbIssuer crumbRequestField(String crumbRequestField) {
    this.crumbRequestField = crumbRequestField;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("crumbRequestField")
  public String getCrumbRequestField() {
    return crumbRequestField;
  }
  public void setCrumbRequestField(String crumbRequestField) {
    this.crumbRequestField = crumbRequestField;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DefaultCrumbIssuer defaultCrumbIssuer = (DefaultCrumbIssuer) o;
    return Objects.equals(propertyClass, defaultCrumbIssuer.propertyClass) &&
        Objects.equals(crumb, defaultCrumbIssuer.crumb) &&
        Objects.equals(crumbRequestField, defaultCrumbIssuer.crumbRequestField);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, crumb, crumbRequestField);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DefaultCrumbIssuer {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    crumb: ").append(toIndentedString(crumb)).append("\n");
    sb.append("    crumbRequestField: ").append(toIndentedString(crumbRequestField)).append("\n");
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

