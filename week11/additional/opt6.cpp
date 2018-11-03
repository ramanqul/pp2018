#include <iostream>

using namespace std;

void modifyA(int n) {
    n = n + 10;
}

void modifyAByPointer(int *p) {
    *p = *p + 30;
}

void modifyAByRef(int& a) {
    a = a + 50;
}

int main() {
    int a = 10;
    int* p = &a;

    // cout << "before a=" << a << endl;

    // modifyA(a); //pass a copy of "a"

    cout << "a=" << a << endl;

    /*
    cout << "pointer location of a=" << p << endl;
    modifyAByPointer(p);
    cout << "pointer location of a=" << p << endl;
    cout << "pointer modify a=" << a << endl;


    
    */
    modifyAByRef(a); //pass original "a" itself

    cout << "modify by ref a=" << a << endl;
    
    return 0;
}