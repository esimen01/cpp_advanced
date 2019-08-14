// Section 6: Template Classes and Functions
// Lesson 32: Template Functions
//
// 14 August 2019

#include <iostream>
using namespace std;

template<class T>
void print(T n) {
    cout << n << endl;
}

int main() {
    print<string>("Hello");
    print<int>(5);
    print("Hi there");

    return 0;
}