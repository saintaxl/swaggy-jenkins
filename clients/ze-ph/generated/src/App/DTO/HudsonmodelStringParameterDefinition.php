<?php

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class HudsonmodelStringParameterDefinition 
{
    /**
     * @DTA\Data(field="_class", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $_class;
    /**
     * @DTA\Data(field="defaultParameterValue", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\HudsonmodelStringParameterValue::class})
     * @DTA\Validator(name="Dictionary", options={"type":\App\DTO\HudsonmodelStringParameterValue::class})
     * @var \App\DTO\HudsonmodelStringParameterValue
     */
    public $default_parameter_value;
    /**
     * @DTA\Data(field="description", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $description;
    /**
     * @DTA\Data(field="name", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $name;
    /**
     * @DTA\Data(field="type", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $type;
}

