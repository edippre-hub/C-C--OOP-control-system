#pragma once
#include "DeviceBase.h"
#include "IControllable.h"

class Actuator : public DeviceBase, public IControllable {
public:
    Actuator(const std::string& name);

    void initialize() override;
    void shutdown() override;
    void updateStatus() override;

    void activate();
    void deactivate();
    bool isActive() const;

private:
    bool active_;
};
