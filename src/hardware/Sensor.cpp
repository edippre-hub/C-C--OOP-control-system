#include "Sensor.h"
#include <iostream>
#include <cstdlib>

Sensor::Sensor(const std::string& name)
    : DeviceBase(name), value_(0.0) {}

void Sensor::initialize() {
    online_ = true;
    std::cout << "[Sensor] " << name_ << " initialized.\n";
}

void Sensor::shutdown() {
    online_ = false;
    std::cout << "[Sensor] " << name_ << " shut down.\n";
}

void Sensor::updateStatus() {
    std::cout << "[Sensor] " << name_
              << " status: " << (online_ ? "ONLINE" : "OFFLINE")
              << ", value=" << value_ << "\n";
}

double Sensor::readValue() {
    if (online_) {
        value_ = (std::rand() % 100) / 1.5;
    }
    return value_;
}
