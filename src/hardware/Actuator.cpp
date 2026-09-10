#include "Actuator.h"
#include <iostream>

Actuator::Actuator(const std::string& name)
    : DeviceBase(name), active_(false) {}

void Actuator::initialize() {
    online_ = true;
    std::cout << "[Actuator] " << name_ << " initialized.\n";
}

void Actuator::shutdown() {
    online_ = false;
    active_ = false;
    std::cout << "[Actuator] " << name_ << " shut down.\n";
}

void Actuator::updateStatus() {
    std::cout << "[Actuator] " << name_
              << " status: " << (online_ ? "ONLINE" : "OFFLINE")
              << ", " << (active_ ? "ACTIVE" : "INACTIVE") << "\n";
}

void Actuator::activate() {
    if (online_) {
        active_ = true;
        std::cout << "[Actuator] " << name_ << " activated.\n";
    }
}

void Actuator::deactivate() {
    if (online_) {
        active_ = false;
        std::cout << "[Actuator] " << name_ << " deactivated.\n";
    }
}

bool Actuator::isActive() const {
    return active_;
}
