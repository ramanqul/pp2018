#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int* t = a;
    a = b;
    b = t;
}

int main() {

    string s = "hello";
    string* ss = &s;

    s = s + "!";

    cout << s << endl;
    cout << *ss << endl;

    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "a=" << a << ",b=" << b << endl;

    return 0;
}