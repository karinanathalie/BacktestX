#include <iostream>
#include "core/CsvDataLoader.hpp"
using namespace std;

int main() {
    string filepath = "data/marketData.csv"; 
    auto marketData = CsvDataLoader::loadFromFile(filepath);

    cout << "Loaded " << marketData.size() << " rows." << endl;

    // Debugging line
    for (int i = 0; i < min(5, (int)marketData.size()); ++i) {
        const auto& row = marketData[i];
        cout << row.timestamp << " 0:" << row.open << " C:" << row.close << endl;
    }

    return 0;
}