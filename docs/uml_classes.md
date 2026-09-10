# UML-style Class Diagram (Text)

## Core
- Controller
  - + addDevice(DeviceBase*)
  - + initializeAll()
  - + shutdownAll()
  - + updateAll()
  - + injectFault(name: std::string)

## Interfaces
- IReadable
  - + readValue() : double

- IControllable
  - + initialize()
  - + shutdown()
  - + updateStatus()

## Base Class
- DeviceBase
  - - name_ : std::string
  - - online_ : bool
  - + getName() : std::string
  - + isOnline() : bool
  - + initialize() = 0
  - + shutdown() = 0
  - + updateStatus() = 0

## Devices
- Valve : DeviceBase, IControllable
  - - open_ : bool
  - + open()
  - + close()
  - + isOpen() : bool

- Pump : DeviceBase, IControllable
  - - running_ : bool
  - + start()
  - + stop()
  - + isRunning() : bool

- Sensor : DeviceBase, IReadable
  - - value_ : double
  - + readValue() : double

- Actuator : DeviceBase, IControllable
  - - active_ : bool
  - + activate()
  - + deactivate()
  - + isActive() : bool
