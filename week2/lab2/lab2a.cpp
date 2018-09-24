#include<iostream>

using namespace std;

//Event or Odd number example
int main() {

    int a;
    cin >> a;

    if (a % 2 == 0) {
        cout << "Event";
    } else {
        cout << "Odd";
    }

    return 0;
}