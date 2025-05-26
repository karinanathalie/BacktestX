#ifndef MARKETDATAPOINT_HPP
#define MARKETDATAPOINT_HPP

#include <string>
#include <chrono>
using namespace std;

struct MarketDataPoint {
    string timestamp;
    double open;
    double high;
    double low;
    double close;
    double volume;

    MarketDataPoint() = default;

    MarketDataPoint(const string& time, double o, double h, double l, double c, double v)
        : timestamp(time), open(o), high(h), low(l), close(c), volume(v) {}
};

#endif