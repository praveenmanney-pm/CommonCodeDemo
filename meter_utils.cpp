// File: meter_utils.cpp
#include "meter_utils.h"
#include <iostream>

void Meter::readVoltage() {
    std::cout << "[COMMON] Voltage: " << voltage << "V\n";
}

void Meter::readCurrent() {
    std::cout << "[COMMON] Current: " << current << "A\n";
}

void Meter::simulateReading(float v, float c) {
    voltage = v;
    current = c;
}
