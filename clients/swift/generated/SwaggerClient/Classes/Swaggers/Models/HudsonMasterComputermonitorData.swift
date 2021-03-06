//
// HudsonMasterComputermonitorData.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class HudsonMasterComputermonitorData: JSONEncodable {
    public var hudsonNodeMonitorsSwapSpaceMonitor: SwapSpaceMonitorMemoryUsage2?
    public var hudsonNodeMonitorsTemporarySpaceMonitor: DiskSpaceMonitorDescriptorDiskSpace?
    public var hudsonNodeMonitorsDiskSpaceMonitor: DiskSpaceMonitorDescriptorDiskSpace?
    public var hudsonNodeMonitorsArchitectureMonitor: String?
    public var hudsonNodeMonitorsResponseTimeMonitor: ResponseTimeMonitorData?
    public var hudsonNodeMonitorsClockMonitor: ClockDifference?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["hudson.node_monitors.SwapSpaceMonitor"] = self.hudsonNodeMonitorsSwapSpaceMonitor?.encodeToJSON()
        nillableDictionary["hudson.node_monitors.TemporarySpaceMonitor"] = self.hudsonNodeMonitorsTemporarySpaceMonitor?.encodeToJSON()
        nillableDictionary["hudson.node_monitors.DiskSpaceMonitor"] = self.hudsonNodeMonitorsDiskSpaceMonitor?.encodeToJSON()
        nillableDictionary["hudson.node_monitors.ArchitectureMonitor"] = self.hudsonNodeMonitorsArchitectureMonitor
        nillableDictionary["hudson.node_monitors.ResponseTimeMonitor"] = self.hudsonNodeMonitorsResponseTimeMonitor?.encodeToJSON()
        nillableDictionary["hudson.node_monitors.ClockMonitor"] = self.hudsonNodeMonitorsClockMonitor?.encodeToJSON()
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
