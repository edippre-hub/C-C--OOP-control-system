# C_C++_OOP-control-system
A C/C++ object‑oriented control & monitoring framework for simulated aerospace Ground Support Equipment (GSE).

C/C++ object-oriented control and monitoring framework for simulated aerospace ground support equipment.
Build a small Ground Support Equipment (GSE) Control System that:

Models hardware components (valves, pumps, sensors, actuators) as C++ classes

Uses inheritance and polymorphism for different device types

Implements interfaces/abstract base classes for common behaviors (e.g., IReadable, IControllable)

Includes a C-style module to show comfort with both C and C++

Provides a command-line interface to run test scenarios (startup, shutdown, fault injection)
# C/C++ OOP Ground Support Control System

![Build](https://img.shields.io/github/actions/workflow/status/edippre-hub/C-C--OOP-control-system/ci.yml?branch=main)
![License](https://img.shields.io/badge/license-MIT-blue.svg)
![C++](https://img.shields.io/badge/C%2B%2B-17-brightgreen)

A C/C++ object-oriented control and monitoring framework for simulated aerospace Ground Support Equipment (GSE).

## Features

- Object-oriented C++ design for hardware devices:
  - Valves, Pumps, Sensors, Actuators
- Abstract interfaces:
  - `IReadable` for sensors
  - `IControllable` for controllable devices
- Polymorphism via `DeviceBase` and `Controller`
- Legacy C module integration (`legacy_interface.c`)
- Command-line scenarios:
  - Startup
  - Normal operation
  - Fault injection
  - Shutdown

## Build & Run

```bash
mkdir build && cd build
cmake ..
make

# Run main controller
./gse_controller

# Run tests
ctest --output-on-failure

## Features
- C++ OOP design
- Abstract interfaces (IReadable, IControllable)
- Polymorphic hardware devices
- Legacy C module integration
- CLI test controller

## Build
```bash
mkdir build && cd build
cmake ..
make
./gse_controller

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
