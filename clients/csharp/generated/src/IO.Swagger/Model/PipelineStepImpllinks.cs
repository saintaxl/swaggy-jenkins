/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// PipelineStepImpllinks
    /// </summary>
    [DataContract]
    public partial class PipelineStepImpllinks :  IEquatable<PipelineStepImpllinks>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PipelineStepImpllinks" /> class.
        /// </summary>
        /// <param name="Self">Self.</param>
        /// <param name="Actions">Actions.</param>
        /// <param name="_Class">_Class.</param>
        public PipelineStepImpllinks(Link Self = default(Link), Link Actions = default(Link), string _Class = default(string))
        {
            this.Self = Self;
            this.Actions = Actions;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets Self
        /// </summary>
        [DataMember(Name="self", EmitDefaultValue=false)]
        public Link Self { get; set; }

        /// <summary>
        /// Gets or Sets Actions
        /// </summary>
        [DataMember(Name="actions", EmitDefaultValue=false)]
        public Link Actions { get; set; }

        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PipelineStepImpllinks {\n");
            sb.Append("  Self: ").Append(Self).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PipelineStepImpllinks);
        }

        /// <summary>
        /// Returns true if PipelineStepImpllinks instances are equal
        /// </summary>
        /// <param name="input">Instance of PipelineStepImpllinks to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PipelineStepImpllinks input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Self == input.Self ||
                    (this.Self != null &&
                    this.Self.Equals(input.Self))
                ) && 
                (
                    this.Actions == input.Actions ||
                    (this.Actions != null &&
                    this.Actions.Equals(input.Actions))
                ) && 
                (
                    this._Class == input._Class ||
                    (this._Class != null &&
                    this._Class.Equals(input._Class))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Self != null)
                    hashCode = hashCode * 59 + this.Self.GetHashCode();
                if (this.Actions != null)
                    hashCode = hashCode * 59 + this.Actions.GetHashCode();
                if (this._Class != null)
                    hashCode = hashCode * 59 + this._Class.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
