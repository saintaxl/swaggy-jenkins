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
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Models
{

    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class GetPipelineBranchesitem :  IEquatable<GetPipelineBranchesitem>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="GetPipelineBranchesitem" /> class.
        /// </summary>
        /// <param name="DisplayName">DisplayName.</param>
        /// <param name="EstimatedDurationInMillis">EstimatedDurationInMillis.</param>
        /// <param name="Name">Name.</param>
        /// <param name="WeatherScore">WeatherScore.</param>
        /// <param name="LatestRun">LatestRun.</param>
        /// <param name="Organization">Organization.</param>
        /// <param name="PullRequest">PullRequest.</param>
        /// <param name="TotalNumberOfPullRequests">TotalNumberOfPullRequests.</param>
        /// <param name="Class">Class.</param>
        public GetPipelineBranchesitem(string DisplayName = default(string), int? EstimatedDurationInMillis = default(int?), string Name = default(string), int? WeatherScore = default(int?), GetPipelineBranchesitemLatestRun LatestRun = default(GetPipelineBranchesitemLatestRun), string Organization = default(string), GetPipelineBranchesitemPullRequest PullRequest = default(GetPipelineBranchesitemPullRequest), int? TotalNumberOfPullRequests = default(int?), string Class = default(string))
        {
            this.DisplayName = DisplayName;
            this.EstimatedDurationInMillis = EstimatedDurationInMillis;
            this.Name = Name;
            this.WeatherScore = WeatherScore;
            this.LatestRun = LatestRun;
            this.Organization = Organization;
            this.PullRequest = PullRequest;
            this.TotalNumberOfPullRequests = TotalNumberOfPullRequests;
            this.Class = Class;
            
        }

        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName")]
        public string DisplayName { get; set; }
        /// <summary>
        /// Gets or Sets EstimatedDurationInMillis
        /// </summary>
        [DataMember(Name="estimatedDurationInMillis")]
        public int? EstimatedDurationInMillis { get; set; }
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }
        /// <summary>
        /// Gets or Sets WeatherScore
        /// </summary>
        [DataMember(Name="weatherScore")]
        public int? WeatherScore { get; set; }
        /// <summary>
        /// Gets or Sets LatestRun
        /// </summary>
        [DataMember(Name="latestRun")]
        public GetPipelineBranchesitemLatestRun LatestRun { get; set; }
        /// <summary>
        /// Gets or Sets Organization
        /// </summary>
        [DataMember(Name="organization")]
        public string Organization { get; set; }
        /// <summary>
        /// Gets or Sets PullRequest
        /// </summary>
        [DataMember(Name="pullRequest")]
        public GetPipelineBranchesitemPullRequest PullRequest { get; set; }
        /// <summary>
        /// Gets or Sets TotalNumberOfPullRequests
        /// </summary>
        [DataMember(Name="totalNumberOfPullRequests")]
        public int? TotalNumberOfPullRequests { get; set; }
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GetPipelineBranchesitem {\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  EstimatedDurationInMillis: ").Append(EstimatedDurationInMillis).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  WeatherScore: ").Append(WeatherScore).Append("\n");
            sb.Append("  LatestRun: ").Append(LatestRun).Append("\n");
            sb.Append("  Organization: ").Append(Organization).Append("\n");
            sb.Append("  PullRequest: ").Append(PullRequest).Append("\n");
            sb.Append("  TotalNumberOfPullRequests: ").Append(TotalNumberOfPullRequests).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
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
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != GetType()) return false;
            return Equals((GetPipelineBranchesitem)obj);
        }

        /// <summary>
        /// Returns true if GetPipelineBranchesitem instances are equal
        /// </summary>
        /// <param name="other">Instance of GetPipelineBranchesitem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GetPipelineBranchesitem other)
        {

            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    this.DisplayName == other.DisplayName ||
                    this.DisplayName != null &&
                    this.DisplayName.Equals(other.DisplayName)
                ) && 
                (
                    this.EstimatedDurationInMillis == other.EstimatedDurationInMillis ||
                    this.EstimatedDurationInMillis != null &&
                    this.EstimatedDurationInMillis.Equals(other.EstimatedDurationInMillis)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.WeatherScore == other.WeatherScore ||
                    this.WeatherScore != null &&
                    this.WeatherScore.Equals(other.WeatherScore)
                ) && 
                (
                    this.LatestRun == other.LatestRun ||
                    this.LatestRun != null &&
                    this.LatestRun.Equals(other.LatestRun)
                ) && 
                (
                    this.Organization == other.Organization ||
                    this.Organization != null &&
                    this.Organization.Equals(other.Organization)
                ) && 
                (
                    this.PullRequest == other.PullRequest ||
                    this.PullRequest != null &&
                    this.PullRequest.Equals(other.PullRequest)
                ) && 
                (
                    this.TotalNumberOfPullRequests == other.TotalNumberOfPullRequests ||
                    this.TotalNumberOfPullRequests != null &&
                    this.TotalNumberOfPullRequests.Equals(other.TotalNumberOfPullRequests)
                ) && 
                (
                    this.Class == other.Class ||
                    this.Class != null &&
                    this.Class.Equals(other.Class)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                    if (this.DisplayName != null)
                    hash = hash * 59 + this.DisplayName.GetHashCode();
                    if (this.EstimatedDurationInMillis != null)
                    hash = hash * 59 + this.EstimatedDurationInMillis.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.WeatherScore != null)
                    hash = hash * 59 + this.WeatherScore.GetHashCode();
                    if (this.LatestRun != null)
                    hash = hash * 59 + this.LatestRun.GetHashCode();
                    if (this.Organization != null)
                    hash = hash * 59 + this.Organization.GetHashCode();
                    if (this.PullRequest != null)
                    hash = hash * 59 + this.PullRequest.GetHashCode();
                    if (this.TotalNumberOfPullRequests != null)
                    hash = hash * 59 + this.TotalNumberOfPullRequests.GetHashCode();
                    if (this.Class != null)
                    hash = hash * 59 + this.Class.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(GetPipelineBranchesitem left, GetPipelineBranchesitem right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(GetPipelineBranchesitem left, GetPipelineBranchesitem right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}