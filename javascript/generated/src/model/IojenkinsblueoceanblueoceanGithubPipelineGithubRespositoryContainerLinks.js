/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/IojenkinsblueoceanresthalLink'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./IojenkinsblueoceanresthalLink'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.IojenkinsblueoceanresthalLink);
  }
}(this, function(ApiClient, IojenkinsblueoceanresthalLink) {
  'use strict';




  /**
   * The IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks model module.
   * @module model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks</code>.
   * @alias module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks} obj Optional instance to populate.
   * @return {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks} The populated <code>IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('self')) {
        obj['self'] = IojenkinsblueoceanresthalLink.constructFromObject(data['self']);
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {module:model/IojenkinsblueoceanresthalLink} self
   */
  exports.prototype['self'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


