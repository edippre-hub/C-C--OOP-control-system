# GSE Control System – Design Overview

This project demonstrates C/C++ object-oriented design for simulated aerospace Ground Support Equipment (GSE).

## Architecture

### Hardware Devices
- Valve
- Pump
- Sensor
- Actuator

Each inherits from:
- `DeviceBase`
- `IControllable` or `IReadable`

### Controller
Manages:
- Initialization
- Shutdown
- Status updates
- Fault injection

### C Module
`legacy_interface.c` simulates legacy hardware integration.

## CLI Scenarios
- Startup
- Normal operation
- Fault injection
- Shutdown
