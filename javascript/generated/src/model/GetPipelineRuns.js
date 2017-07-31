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
    define(['ApiClient', 'model/SwaggyjenkinsPipelineRun'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./SwaggyjenkinsPipelineRun'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.GetPipelineRuns = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.SwaggyjenkinsPipelineRun);
  }
}(this, function(ApiClient, SwaggyjenkinsPipelineRun) {
  'use strict';




  /**
   * The GetPipelineRuns model module.
   * @module model/GetPipelineRuns
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>GetPipelineRuns</code>.
   * @alias module:model/GetPipelineRuns
   * @class
   * @extends Array
   */
  var exports = function() {
    var _this = this;
    _this = new Array();
    Object.setPrototypeOf(_this, exports);

    return _this;
  };

  /**
   * Constructs a <code>GetPipelineRuns</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/GetPipelineRuns} obj Optional instance to populate.
   * @return {module:model/GetPipelineRuns} The populated <code>GetPipelineRuns</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      ApiClient.constructFromObject(data, obj, 'SwaggyjenkinsPipelineRun');

    }
    return obj;
  }




  return exports;
}));


