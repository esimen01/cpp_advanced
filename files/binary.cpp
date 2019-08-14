// Section 3: Files
// Lesson 11: Reading and Writing Binary Files
//
// 14 August 2019

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

int main() {
    Person someone = {"Frodo", 220, 0.8};

    // writing
    string fileName = "files/bin_test.bin";
    ofstream outputFile;
    outputFile.open(fileName, ios::binary);
    if (outputFile.is_open()) {
        // outputFile.write((char *)&someone, sizeof(Person));
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();
    } else {
        cout << "Could not create file: " << fileName << endl;
    }

    // reading
    Person someoneElse = {};

    ifstream inputFile;
    inputFile.open(fileName, ios::binary);
    if (inputFile.is_open()) {
        // outputFile.write((char *)&someone, sizeof(Person));
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

        inputFile.close();
    } else {
        cout << "Could not read file: " << fileName << endl;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    return 0;
}