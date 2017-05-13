/**
 * Swaggy Jenkins
 * Jenkins remote access API
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/CauseUserIdCause'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./CauseUserIdCause'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.CauseAction = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.CauseUserIdCause);
  }
}(this, function(ApiClient, CauseUserIdCause) {
  'use strict';




  /**
   * The CauseAction model module.
   * @module model/CauseAction
   * @version 0.0.1
   */

  /**
   * Constructs a new <code>CauseAction</code>.
   * @alias module:model/CauseAction
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>CauseAction</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/CauseAction} obj Optional instance to populate.
   * @return {module:model/CauseAction} The populated <code>CauseAction</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('causes')) {
        obj['causes'] = ApiClient.convertToType(data['causes'], [CauseUserIdCause]);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {Array.<module:model/CauseUserIdCause>} causes
   */
  exports.prototype['causes'] = undefined;



  return exports;
}));

