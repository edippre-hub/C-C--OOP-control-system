#include "Valve.h"
#include <iostream>

Valve::Valve(const std::string& name)
    : DeviceBase(name), open_(false) {}

void Valve::initialize() {
    online_ = true;
    std::cout << "[Valve] " << name_ << " initialized.\n";
}

void Valve::shutdown() {
    online_ = false;
    open_ = false;
    std::cout << "[Valve] " << name_ << " shut down.\n";
}

void Valve::updateStatus() {
    std::cout << "[Valve] " << name_
              << " status: " << (online_ ? "ONLINE" : "OFFLINE")
              << ", " << (open_ ? "OPEN" : "CLOSED") << "\n";
}

void Valve::open() {
    if (online_) {
        open_ = true;
        std::cout << "[Valve] " << name_ << " opened.\n";
    }
}

void Valve::close() {
    if (online_) {
        open_ = false;
        std::cout << "[Valve] " << name_ << " closed.\n";
    }
}

bool Valve::isOpen() const {
    return open_;
}
