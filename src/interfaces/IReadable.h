#pragma once

class IReadable {
public:
    virtual ~IReadable() = default;
    virtual double readValue() = 0;
};
