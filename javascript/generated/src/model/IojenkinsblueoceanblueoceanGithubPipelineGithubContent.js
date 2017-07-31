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
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubContent = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The IojenkinsblueoceanblueoceanGithubPipelineGithubContent model module.
   * @module model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>IojenkinsblueoceanblueoceanGithubPipelineGithubContent</code>.
   * @alias module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent
   * @class
   */
  var exports = function() {
    var _this = this;









  };

  /**
   * Constructs a <code>IojenkinsblueoceanblueoceanGithubPipelineGithubContent</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent} obj Optional instance to populate.
   * @return {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent} The populated <code>IojenkinsblueoceanblueoceanGithubPipelineGithubContent</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('sha')) {
        obj['sha'] = ApiClient.convertToType(data['sha'], 'String');
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('repo')) {
        obj['repo'] = ApiClient.convertToType(data['repo'], 'String');
      }
      if (data.hasOwnProperty('size')) {
        obj['size'] = ApiClient.convertToType(data['size'], 'Number');
      }
      if (data.hasOwnProperty('owner')) {
        obj['owner'] = ApiClient.convertToType(data['owner'], 'String');
      }
      if (data.hasOwnProperty('path')) {
        obj['path'] = ApiClient.convertToType(data['path'], 'String');
      }
      if (data.hasOwnProperty('base64Data')) {
        obj['base64Data'] = ApiClient.convertToType(data['base64Data'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} sha
   */
  exports.prototype['sha'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} repo
   */
  exports.prototype['repo'] = undefined;
  /**
   * @member {Number} size
   */
  exports.prototype['size'] = undefined;
  /**
   * @member {String} owner
   */
  exports.prototype['owner'] = undefined;
  /**
   * @member {String} path
   */
  exports.prototype['path'] = undefined;
  /**
   * @member {String} base64Data
   */
  exports.prototype['base64Data'] = undefined;



  return exports;
}));


