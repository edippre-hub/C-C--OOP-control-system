#include <gtest/gtest.h>
#include "hardware/Sensor.h"

TEST(SensorTest, InitializeSetsOnline) {
    Sensor s("Test Sensor");
    s.initialize();
    EXPECT_TRUE(s.isOnline());
}

TEST(SensorTest, ReadValueChanges) {
    Sensor s("Test Sensor");
    s.initialize();
    double v1 = s.readValue();
    double v2 = s.readValue();
    // Not strictly guaranteed, but likely different
    EXPECT_NE(v1, v2);
}
