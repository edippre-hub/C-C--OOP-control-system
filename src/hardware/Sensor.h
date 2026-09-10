#pragma once
#include "DeviceBase.h"
#include "IReadable.h"

class Sensor : public DeviceBase, public IReadable {
public:
    Sensor(const std::string& name);

    void initialize() override;
    void shutdown() override;
    void updateStatus() override;

    double readValue() override;

private:
    double value_;
};
