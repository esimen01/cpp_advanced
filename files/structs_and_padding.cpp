// Section 3: Files
// Lesson 10: Structs and Padding
//
// 14 August 2019

#include <iostream>
using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main() {
    cout << sizeof(Person) << endl;

    return 0;
}