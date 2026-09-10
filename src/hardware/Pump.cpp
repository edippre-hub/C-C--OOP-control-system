#include "Pump.h"
#include <iostream>

Pump::Pump(const std::string& name)
    : DeviceBase(name), running_(false) {}

void Pump::initialize() {
    online_ = true;
    std::cout << "[Pump] " << name_ << " initialized.\n";
}

void Pump::shutdown() {
    online_ = false;
    running_ = false;
    std::cout << "[Pump] " << name_ << " shut down.\n";
}

void Pump::updateStatus() {
    std::cout << "[Pump] " << name_
              << " status: " << (online_ ? "ONLINE" : "OFFLINE")
              << ", " << (running_ ? "RUNNING" : "STOPPED") << "\n";
}

void Pump::start() {
    if (online_) {
        running_ = true;
        std::cout << "[Pump] " << name_ << " started.\n";
    }
}

void Pump::stop() {
    if (online_) {
        running_ = false;
        std::cout << "[Pump] " << name_ << " stopped.\n";
    }
}

bool Pump::isRunning() const {
    return running_;
}
