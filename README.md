# C_C++_OOP-control-system
C/C++ object-oriented control and monitoring framework for simulated aerospace ground support equipment.
Build a small Ground Support Equipment (GSE) Control System that:

Models hardware components (valves, pumps, sensors, actuators) as C++ classes

Uses inheritance and polymorphism for different device types

Implements interfaces/abstract base classes for common behaviors (e.g., IReadable, IControllable)

Includes a C-style module to show comfort with both C and C++

Provides a command-line interface to run test scenarios (startup, shutdown, fault injection)

C_C++_OOP-control-system/
├─ src/
│  ├─ main.cpp
│  ├─ hardware/
│  │  ├─ DeviceBase.h
│  │  ├─ Valve.h
│  │  ├─ Valve.cpp
│  │  ├─ Pump.h
│  │  ├─ Pump.cpp
│  │  ├─ Sensor.h
│  │  ├─ Sensor.cpp
│  │  ├─ Actuator.h
│  │  ├─ Actuator.cpp
│  ├─ interfaces/
│  │  ├─ IReadable.h
│  │  ├─ IControllable.h
│  ├─ core/
│  │  ├─ Controller.h
│  │  ├─ Controller.cpp
│  ├─ c_module/
│  │  ├─ legacy_interface.c
│  │  ├─ legacy_interface.h
├─ include/
│  ├─ config.h
├─ tests/
│  ├─ test_valve.cpp
│  ├─ test_pump.cpp
├─ docs/
│  ├─ design_overview.md
├─ CMakeLists.txt
├─ README.md
