//
// PipelineStepImpllinks.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineStepImpllinks: Codable {

    public var _self: Link?
    public var actions: Link?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _self = "self"
        case actions = "actions"
        case _class = "_class"
    }

}