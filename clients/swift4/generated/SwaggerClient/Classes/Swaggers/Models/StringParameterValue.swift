//
// StringParameterValue.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class StringParameterValue: Codable {

    public var _class: String?
    public var name: String?
    public var value: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case name = "name"
        case value = "value"
    }

}
