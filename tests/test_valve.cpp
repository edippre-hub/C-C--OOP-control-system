#include <gtest/gtest.h>
#include "hardware/Valve.h"

TEST(ValveTest, InitializeSetsOnline) {
    Valve v("Test Valve");
    v.initialize();
    EXPECT_TRUE(v.isOnline());
}

TEST(ValveTest, OpenCloseBehavior) {
    Valve v("Test Valve");
    v.initialize();
    v.open();
    EXPECT_TRUE(v.isOpen());
    v.close();
    EXPECT_FALSE(v.isOpen());
}
