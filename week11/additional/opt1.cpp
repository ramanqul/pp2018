#include <iostream>

using namespace std;

template<class T> void swapAny(T& a, T& b) {
    T temp(a);
    a = b;
    b = temp;
}

int main() {

    int a = 100;
    int b = 20;

    cout << "a=" << a << ",b=" << b << endl;

    swapAny(a, b);

    cout << "a=" << a << ",b=" << b << endl;


    return 0;
}