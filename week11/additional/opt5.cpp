#include <iostream>

using namespace std;

void modifyA(int n) {
    n = n + 10;
}

int main() {
    int a = 10;

    cout << "before a=" << a << endl;

    modifyA(a);

    cout << "after a=" << a << endl;

    return 0;
}