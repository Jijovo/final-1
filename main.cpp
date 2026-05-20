//Ezzat Mohamadein | ComSc 210 | Final 1
#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main() {
    //Milestone 1, create std::map to store airport codes paired with traffic count (number of times it is listed in file)
    map<string, int> airportMap;
    
    string line;
    ifstream fin("210-final-1-SP26.txt");
    while (fin >> line) {
        if(airportMap.find(line) == airportMap.end()) {
            airportMap[line] = 1;
        }
        else {
            airportMap[line] += 1;
        }
    }
    fin.close();

    //Milesone 2, find the busiest airport
    int max = 0;
    string maxAirport;
    for (auto it = airportMap.begin(); it != airportMap.end(); it++) {
        if (it->second > max) {
            max = it->second;
            maxAirport = it->first;
        }
    }

    for (auto it = airportMap.begin(); it != airportMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout <<

    return 0;
}