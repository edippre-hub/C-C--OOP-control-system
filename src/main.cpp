#include <iostream>
#include "core/Controller.h"
#include "hardware/Valve.h"
#include "hardware/Pump.h"
#include "hardware/Sensor.h"
#include "hardware/Actuator.h"
#include "c_module/legacy_interface.h"

int main() {
    Controller controller;

    auto valve1 = std::make_shared<Valve>("Fuel Valve");
    auto pump1 = std::make_shared<Pump>("Hydraulic Pump");
    auto sensor1 = std::make_shared<Sensor>("Pressure Sensor");
    auto actuator1 = std::make_shared<Actuator>("Landing Gear Actuator");

    controller.addDevice(valve1);
    controller.addDevice(pump1);
    controller.addDevice(sensor1);
    controller.addDevice(actuator1);

    controller.initializeAll();

    valve1->open();
    pump1->start();
    actuator1->activate();

    controller.updateAll();

    legacy_print_status("Fuel Valve");

    controller.injectFault("Hydraulic Pump");

    controller.updateAll();

    controller.shutdownAll();

    return 0;
}
