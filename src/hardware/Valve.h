#pragma once
#include "DeviceBase.h"
#include "IControllable.h"

class Valve : public DeviceBase, public IControllable {
public:
    Valve(const std::string& name);

    void initialize() override;
    void shutdown() override;
    void updateStatus() override;

    void open();
    void close();
    bool isOpen() const;

private:
    bool open_;
};
