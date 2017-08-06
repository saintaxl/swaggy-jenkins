//
// ExtensionClassContainerImpl1map.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class ExtensionClassContainerImpl1map: JSONEncodable {
    public var ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl: ExtensionClassImpl?
    public var ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl: ExtensionClassImpl?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"] = self.ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl?.encodeToJSON()
        nillableDictionary["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"] = self.ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl?.encodeToJSON()
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}