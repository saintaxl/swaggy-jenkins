<?php
/**
 * InputStepImpl
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Server\Model
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Server\Model;

use \ArrayAccess;
use Swagger\Server\Model\StringParameterDefinition;
use Swagger\Server\Model\InputStepImpllinks;

/**
 * Class representing the InputStepImpl model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class InputStepImpl implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'InputStepImpl';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
        '_links' => ['_links', 'Swagger\Server\Model\InputStepImpllinks', null, 'setLinks', 'getLinks'],
        'id' => ['id', 'string', null, 'setId', 'getId'],
        'message' => ['message', 'string', null, 'setMessage', 'getMessage'],
        'ok' => ['ok', 'string', null, 'setOk', 'getOk'],
        'parameters' => ['parameters', 'Swagger\Server\Model\StringParameterDefinition[]', null, 'setParameters', 'getParameters'],
        'submitter' => ['submitter', 'string', null, 'setSubmitter', 'getSubmitter'],
    ];
    

    
    /**     * @var string|null
     */
    protected $_class;

    /**     * @var InputStepImpllinks|null
     */
    protected $_links;

    /**     * @var string|null
     */
    protected $id;

    /**     * @var string|null
     */
    protected $message;

    /**     * @var string|null
     */
    protected $ok;

    /**     * @var StringParameterDefinition[]|null
     */
    protected $parameters;

    /**     * @var string|null
     */
    protected $submitter;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
        $this->_links = isset($data['_links']) ? $data['_links'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->message = isset($data['message']) ? $data['message'] : null;
        $this->ok = isset($data['ok']) ? $data['ok'] : null;
        $this->parameters = isset($data['parameters']) ? $data['parameters'] : null;
        $this->submitter = isset($data['submitter']) ? $data['submitter'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        return $invalid_properties;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function modelName() {
        return self::$_name;
    }

    /**
     * Array of property to mappings.
     *
     * @return array[]
     */
    public function modelAttributes() {
        
        return self::$_attributes;
    }

    /**
     * Validate all the properties in the model
     *
     * Return true if all passed.
     *
     * @return bool True if all properties are valid
     */
    public function isValid()
    {
        return true;
    }


    /**
     * Gets _class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->_class;
    }

    /**
     * Sets _class.
     *
     * @param string|null $_class
     *
     * @return $this
     */
    public function setClass($_class = null)
    {
        $this->_class = $_class;

        return $this;
    }

    /**
     * Gets _links.
     *
     * @return InputStepImpllinks|null
     */
    public function getLinks()
    {
        return $this->_links;
    }

    /**
     * Sets _links.
     *
     * @param InputStepImpllinks|null $_links
     *
     * @return $this
     */
    public function setLinks(InputStepImpllinks $_links = null)
    {
        $this->_links = $_links;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets message.
     *
     * @return string|null
     */
    public function getMessage()
    {
        return $this->message;
    }

    /**
     * Sets message.
     *
     * @param string|null $message
     *
     * @return $this
     */
    public function setMessage($message = null)
    {
        $this->message = $message;

        return $this;
    }

    /**
     * Gets ok.
     *
     * @return string|null
     */
    public function getOk()
    {
        return $this->ok;
    }

    /**
     * Sets ok.
     *
     * @param string|null $ok
     *
     * @return $this
     */
    public function setOk($ok = null)
    {
        $this->ok = $ok;

        return $this;
    }

    /**
     * Gets parameters.
     *
     * @return StringParameterDefinition[]|null
     */
    public function getParameters()
    {
        return $this->parameters;
    }

    /**
     * Sets parameters.
     *
     * @param StringParameterDefinition[]|null $parameters
     *
     * @return $this
     */
    public function setParameters(array $parameters = null)
    {
        $this->parameters = $parameters;

        return $this;
    }

    /**
     * Gets submitter.
     *
     * @return string|null
     */
    public function getSubmitter()
    {
        return $this->submitter;
    }

    /**
     * Sets submitter.
     *
     * @param string|null $submitter
     *
     * @return $this
     */
    public function setSubmitter($submitter = null)
    {
        $this->submitter = $submitter;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->$offset) ? $this->$offset : null;
    }

    /**
     * Sets value based on offset.
     * @param  string  $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        $this->$offset = null;
    }
}


