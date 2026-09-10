#pragma once
#include <string>

class DeviceBase {
public:
    DeviceBase(const std::string& name) : name_(name), online_(false) {}
    virtual ~DeviceBase() = default;

    virtual void initialize() = 0;
    virtual void shutdown() = 0;
    virtual void updateStatus() = 0;

    std::string getName() const { return name_; }
    bool isOnline() const { return online_; }

protected:
    std::string name_;
    bool online_;
};
