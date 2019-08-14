// Section 6: Template Classes and Functions
// Lesson 33: Template Functions and Type Inference
//
// 14 August 2019

#include <iostream>
using namespace std;

template<class T>
void print(T n) {
    cout << "Template version: " << n << endl;
}

void print(int value) {
    cout << "Non-template version: " << value << endl;
}

template<class T>
void show() {
    cout << T() << endl;
}

int main() {
    print<string>("Hello");
    print<int>(5);
    print("Hi there");
    print(5);
    print<>(6);

    show<double>();

    return 0;
}