#include <gtest/gtest.h>
#include "hardware/Pump.h"

TEST(PumpTest, InitializeSetsOnline) {
    Pump p("Test Pump");
    p.initialize();
    EXPECT_TRUE(p.isOnline());
}

TEST(PumpTest, StartStopBehavior) {
    Pump p("Test Pump");
    p.initialize();
    p.start();
    EXPECT_TRUE(p.isRunning());
    p.stop();
    EXPECT_FALSE(p.isRunning());
}
