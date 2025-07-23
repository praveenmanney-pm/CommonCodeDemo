// File: meter_utils.h
#ifndef METER_UTILS_H
#define METER_UTILS_H

class Meter {
public:
    void readVoltage();
    void readCurrent();
    void simulateReading(float voltage, float current);

private:
    float voltage = 0.0;
    float current = 0.0;
};

#endif
