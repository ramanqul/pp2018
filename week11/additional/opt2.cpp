#include <iostream>

using namespace std;

void modifyByValue(int a) {
    a = a + 100;
}

void modifyByPointer(int* p) {
    *p = *p + 100;
}

void modifyByReference(int& r) {
    r = r + 100;
}

int main() {

    int a = 10;
    int b = 20;
    int c = 30;

    cout << "value of a=" << a << endl;

    modifyByValue(a);

    cout << "modified value of a=" << a << endl;

    cout << "-----------" << endl;



    cout << "value of b=" << b << endl;

    modifyByPointer(&b); //extract address of a

    cout << "modified value of b=" << b << endl;

    
    
    cout << "-----------" << endl;

    cout << "value of c=" << c << endl;

    modifyByReference(c);

    cout << "modified value of c=" << c << endl;



    return 0;
}