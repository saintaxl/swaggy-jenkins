package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class SwapSpaceMonitorMemoryUsage2 (
  _class: Option[String],
availablePhysicalMemory: Option[Integer],
availableSwapSpace: Option[Integer],
totalPhysicalMemory: Option[Integer],
totalSwapSpace: Option[Integer]
)
