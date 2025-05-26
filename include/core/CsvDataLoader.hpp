#ifndef CSVDATALOADER_HPP
#define CSVDATALOADER_HPP

#include <vector>
#include <string>
#include "MarketDataPoint.hpp"
using namespace std;

class CsvDataLoader {
public:
    static vector<MarketDataPoint> loadFromFile(const string& filepath);
};

#endif