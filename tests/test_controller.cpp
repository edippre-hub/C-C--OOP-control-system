#include <gtest/gtest.h>
#include "core/Controller.h"
#include "hardware/Valve.h"
#include "hardware/Pump.h"

TEST(ControllerTest, InitializeAllSetsOnline) {
    Controller c;
    auto v = std::make_shared<Valve>("Valve");
    auto p = std::make_shared<Pump>("Pump");
    c.addDevice(v);
    c.addDevice(p);

    c.initializeAll();

    EXPECT_TRUE(v->isOnline());
    EXPECT_TRUE(p->isOnline());
}

TEST(ControllerTest, FaultInjectionShutsDownDevice) {
    Controller c;
    auto v = std::make_shared<Valve>("Valve");
    c.addDevice(v);

    c.initializeAll();
    EXPECT_TRUE(v->isOnline());

    c.injectFault("Valve");
    EXPECT_FALSE(v->isOnline());
}
