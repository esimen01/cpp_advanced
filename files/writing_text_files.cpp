// Section 3: Files
// Lesson 7: Writing Text Files
//
// 14 August 2019

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream outFile;
    fstream outFile;

    string outputFileName = "files/text.txt";
    // outFile.open(outputFileName);
    outFile.open(outputFileName, ios::out);

    if (outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    } else {
        cout << "Could not create file: " << outputFileName << endl;
    }

    return 0;
}