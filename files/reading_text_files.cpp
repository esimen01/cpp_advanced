// Section 3: Files
// Lesson 8: Reading Text Files
//
// 14 August 2019

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string inFileName = "files/read_test.txt";
    ifstream inFile;

    inFile.open(inFileName);

    if (inFile.is_open()) {
        string line;
        while(inFile) {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    } else {
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}