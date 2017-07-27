//
// IojenkinsblueoceanserviceembeddedrestPipelineImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class IojenkinsblueoceanserviceembeddedrestPipelineImpl: JSONEncodable {

    public var _class: String?
    public var displayName: String?
    public var estimatedDurationInMillis: Int32?
    public var fullName: String?
    public var latestRun: String?
    public var name: String?
    public var organization: String?
    public var weatherScore: Int32?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["estimatedDurationInMillis"] = self.estimatedDurationInMillis?.encodeToJSON()
        nillableDictionary["fullName"] = self.fullName
        nillableDictionary["latestRun"] = self.latestRun
        nillableDictionary["name"] = self.name
        nillableDictionary["organization"] = self.organization
        nillableDictionary["weatherScore"] = self.weatherScore?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}