#pragma once
#include <vector>
#include <memory>
#include "DeviceBase.h"

class Controller {
public:
    void addDevice(std::shared_ptr<DeviceBase> device);
    void initializeAll();
    void shutdownAll();
    void updateAll();
    void injectFault(const std::string& name);

private:
    std::vector<std::shared_ptr<DeviceBase>> devices_;
};
