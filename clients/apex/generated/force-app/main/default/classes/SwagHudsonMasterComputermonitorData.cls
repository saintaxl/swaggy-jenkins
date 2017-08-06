/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/**
 * SwagHudsonMasterComputermonitorData
 */
public class SwagHudsonMasterComputermonitorData implements Swagger.MappedProperties {
    /**
     * Get hudsonNodeMonitorsSwapSpaceMonitor
     * @return hudsonNodeMonitorsSwapSpaceMonitor
     */
    public SwagSwapSpaceMonitorMemoryUsage2 hudsonNodeMonitorsSwapSpaceMonitor { get; set; }

    /**
     * Get hudsonNodeMonitorsTemporarySpaceMonitor
     * @return hudsonNodeMonitorsTemporarySpaceMonitor
     */
    public SwagDiskSpaceMonitorDescriptorDiskSp hudsonNodeMonitorsTemporarySpaceMonitor { get; set; }

    /**
     * Get hudsonNodeMonitorsDiskSpaceMonitor
     * @return hudsonNodeMonitorsDiskSpaceMonitor
     */
    public SwagDiskSpaceMonitorDescriptorDiskSp hudsonNodeMonitorsDiskSpaceMonitor { get; set; }

    /**
     * Get hudsonNodeMonitorsArchitectureMonitor
     * @return hudsonNodeMonitorsArchitectureMonitor
     */
    public String hudsonNodeMonitorsArchitectureMonitor { get; set; }

    /**
     * Get hudsonNodeMonitorsResponseTimeMonitor
     * @return hudsonNodeMonitorsResponseTimeMonitor
     */
    public SwagResponseTimeMonitorData hudsonNodeMonitorsResponseTimeMonitor { get; set; }

    /**
     * Get hudsonNodeMonitorsClockMonitor
     * @return hudsonNodeMonitorsClockMonitor
     */
    public SwagClockDifference hudsonNodeMonitorsClockMonitor { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'hudson.node_monitors.SwapSpaceMonitor' => 'hudsonNodeMonitorsSwapSpaceMonitor',
        'hudson.node_monitors.TemporarySpaceMonitor' => 'hudsonNodeMonitorsTemporarySpaceMonitor',
        'hudson.node_monitors.DiskSpaceMonitor' => 'hudsonNodeMonitorsDiskSpaceMonitor',
        'hudson.node_monitors.ArchitectureMonitor' => 'hudsonNodeMonitorsArchitectureMonitor',
        'hudson.node_monitors.ResponseTimeMonitor' => 'hudsonNodeMonitorsResponseTimeMonitor',
        'hudson.node_monitors.ClockMonitor' => 'hudsonNodeMonitorsClockMonitor',
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagHudsonMasterComputermonitorData getExample() {
        SwagHudsonMasterComputermonitorData hudsonMasterComputermonitorData = new SwagHudsonMasterComputermonitorData();
        hudsonMasterComputermonitorData.hudsonNodeMonitorsSwapSpaceMonitor = SwagSwapSpaceMonitorMemoryUsage2.getExample();
        hudsonMasterComputermonitorData.hudsonNodeMonitorsTemporarySpaceMonitor = SwagDiskSpaceMonitorDescriptorDiskSp.getExample();
        hudsonMasterComputermonitorData.hudsonNodeMonitorsDiskSpaceMonitor = SwagDiskSpaceMonitorDescriptorDiskSp.getExample();
        hudsonMasterComputermonitorData.hudsonNodeMonitorsArchitectureMonitor = 'aeiou';
        hudsonMasterComputermonitorData.hudsonNodeMonitorsResponseTimeMonitor = SwagResponseTimeMonitorData.getExample();
        hudsonMasterComputermonitorData.hudsonNodeMonitorsClockMonitor = SwagClockDifference.getExample();
        hudsonMasterComputermonitorData.propertyClass = 'aeiou';
        return hudsonMasterComputermonitorData;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagHudsonMasterComputermonitorData) {
            SwagHudsonMasterComputermonitorData hudsonMasterComputermonitorData = (SwagHudsonMasterComputermonitorData) obj;
            return this.hudsonNodeMonitorsSwapSpaceMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsSwapSpaceMonitor
                && this.hudsonNodeMonitorsTemporarySpaceMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsTemporarySpaceMonitor
                && this.hudsonNodeMonitorsDiskSpaceMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsDiskSpaceMonitor
                && this.hudsonNodeMonitorsArchitectureMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsArchitectureMonitor
                && this.hudsonNodeMonitorsResponseTimeMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsResponseTimeMonitor
                && this.hudsonNodeMonitorsClockMonitor == hudsonMasterComputermonitorData.hudsonNodeMonitorsClockMonitor
                && this.propertyClass == hudsonMasterComputermonitorData.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsSwapSpaceMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsSwapSpaceMonitor));
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsTemporarySpaceMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsTemporarySpaceMonitor));
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsDiskSpaceMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsDiskSpaceMonitor));
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsArchitectureMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsArchitectureMonitor));
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsResponseTimeMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsResponseTimeMonitor));
        hashCode = (17 * hashCode) + (hudsonNodeMonitorsClockMonitor == null ? 0 : System.hashCode(hudsonNodeMonitorsClockMonitor));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
