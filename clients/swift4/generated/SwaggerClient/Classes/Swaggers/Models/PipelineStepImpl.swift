//
// PipelineStepImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineStepImpl: Codable {

    public var _class: String?
    public var links: PipelineStepImpllinks?
    public var displayName: String?
    public var durationInMillis: Int?
    public var id: String?
    public var input: InputStepImpl?
    public var result: String?
    public var startTime: String?
    public var state: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case links = "_links"
        case displayName = "displayName"
        case durationInMillis = "durationInMillis"
        case id = "id"
        case input = "input"
        case result = "result"
        case startTime = "startTime"
        case state = "state"
    }

}