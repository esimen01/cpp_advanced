// Section 2: Exceptions
// Lesson 4: Standard Exceptions
//
// 13 August 2019

#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[9999999999999999];
        delete [] pMemory;
    }
};

int main() {
    try {
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Still running" << endl;

    return 0;
}