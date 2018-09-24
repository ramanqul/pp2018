#include<iostream>

using namespace std;


int main() {
    
    int a;

    int sum = 0;
    
    //read number until end (On Windows is Ctrl+Z )
    while (cin >> a) {
        sum = sum + a;
    }
    
    cout << sum;

    return 0;
}