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



---

## 5. Simple UML-style class diagram (text)

**`docs/uml_classes.md`**

```markdown
# UML-style Class Diagram (Text)

## Core

- `Controller`
  - + addDevice(DeviceBase*)
  - + initializeAll()
  - + shutdownAll()
  - + updateAll()
  - + injectFault(name: std::string)

## Interfaces

- `IReadable`
  - + readValue() : double

- `IControllable`
  - + initialize()
  - + shutdown()
  - + updateStatus()

## Base

- `DeviceBase`
  - - name_ : std::string
  - - online_ : bool
  - + getName() : std::string
  - + isOnline() : bool
  - + initialize() = 0
  - + shutdown() = 0
  - + updateStatus() = 0

## Devices

- `Valve` : DeviceBase, IControllable
  - - open_ : bool
  - + open()
  - + close()
  - + isOpen() : bool

- `Pump` : DeviceBase, IControllable
  - - running_ : bool
  - + start()
  - + stop()
  - + isRunning() : bool

- `Sensor` : DeviceBase, IReadable
  - - value_ : double
  - + readValue() : double

- `Actuator` : DeviceBase, IControllable
  - - active_ : bool
  - + activate()
  - + deactivate()
  - + isActive() : bool
