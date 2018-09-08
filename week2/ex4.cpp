#include<iostream>

using namespace std;


int main() {

    int a = 10; //1010
    int b = 11; // 1011

    int c1 = a & b; //10
    int c2 = a | b; //11
    int c3 = a ^ b; //1
    int c4 = !a;


    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;

    int c5 = 10 >> 1;
    int c6 = 10 << 1;

    cout << c5 << endl;
    cout << c6 << endl;

    return 0;
}