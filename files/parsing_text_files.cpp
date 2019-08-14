// Section 3: Files
// Lesson 9: Parsing Text Files
//
// 14 August 2019

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "files/stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open()) {
        return 1;
    }

    while (input) {
        string line;

        getline(input, line, ':');

        int population;
        input >> population;

        // input.get();
        input >> ws;

        if (!input) {
            break;
        }

        cout << line << " -- " << population << endl;
    }

    return 0;
}