#pragma once
#include "DeviceBase.h"
#include "IControllable.h"

class Pump : public DeviceBase, public IControllable {
public:
    Pump(const std::string& name);

    void initialize() override;
    void shutdown() override;
    void updateStatus() override;

    void start();
    void stop();
    bool isRunning() const;

private:
    bool running_;
};
