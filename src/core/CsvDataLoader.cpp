#include "core/CsvDataLoader.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

vector<MarketDataPoint> CsvDataLoader::loadFromFile(const string& filepath) {
    vector<MarketDataPoint> data;
    ifstream file(filepath);

    if (!file.is_open()) {
        cerr << "Error opening file: " << filepath << endl;
        return data;
    }

    string line;
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string item;

        string timestamp;
        double open, high, low, close, volume;

        getline(ss, timestamp, ',');
        getline(ss, item, ','); 
        open = stod(item);

        getline(ss, item, ',');
        high = stod(item);

        getline(ss, item, ',');
        low = stod(item);

        getline(ss, item, ',');
        close = stod(item);

        getline(ss, item, ',');
        volume = stod(item);

        data.emplace_back(timestamp, open, high, low, close, volume);
    }

    return data;
}