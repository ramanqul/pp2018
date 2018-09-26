#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n;
    
    if(n >=0 && n <= 59) {
        cout << "F";
    } else if(n >= 60 && n <= 69) {
        cout << "D";
    } else if(n >= 70 && n <= 79) {
        cout << "C";
    } else if(n >= 80 && n <= 89) {
        cout << "B";
    } else if(n >= 90 && n <= 100) {
        cout << "A";
    }

    return 0;
}