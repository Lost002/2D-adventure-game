#include <iostream>
#include <fstream>

std::string MAP;

void parse_map(std::string map) {
    std::string line;
    std::string Map = "maps/"+map+".txt";
    std::ifstream mapfile(Map);
    while (getline(mapfile, line)) {
        for (char& c : line) {
            if (c == '%') {
                std::cout << "\n";
            } else {
                std::cout << c;
            }
        }
    }
}

int main() {
    parse_map("map1");
    return 0;
}