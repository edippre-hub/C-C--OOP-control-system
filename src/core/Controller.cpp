#include "Controller.h"
#include <iostream>

void Controller::addDevice(std::shared_ptr<DeviceBase> device) {
    devices_.push_back(device);
}

void Controller::initializeAll() {
    std::cout << "\n=== SYSTEM STARTUP ===\n";
    for (auto& d : devices_) d->initialize();
}

void Controller::shutdownAll() {
    std::cout << "\n=== SYSTEM SHUTDOWN ===\n";
    for (auto& d : devices_) d->shutdown();
}

void Controller::updateAll() {
    std::cout << "\n=== STATUS UPDATE ===\n";
    for (auto& d : devices_) d->updateStatus();
}

void Controller::injectFault(const std::string& name) {
    std::cout << "\n*** FAULT INJECTION: " << name << " ***\n";
    for (auto& d : devices_) {
        if (d->getName() == name) {
            d->shutdown();
        }
    }
}
