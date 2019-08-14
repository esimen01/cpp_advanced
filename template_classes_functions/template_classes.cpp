// Section 6: Template Classes and Functions
// Lesson 31: Template Classes
//
// 14 August 2019

#include <iostream>
using namespace std;

template<class T, class K>
class Test {
private:
    T obj;

public:
    Test(T obj) {
        this->obj = obj;
    }
    void print() {
        cout << obj << endl;
    }
};

int main() {
    Test<string, int> test1("Hello");
    test1.print();

    return 0;
}