#include<iostream>

using namespace std;


int main() {
    /*
    for (char c = 'A';c<='Z';c = c + 1) {
        if (c >= 'K') {
            break;
        }
        cout << c << endl;
    }
    */


    for (char c = 'A';c<='Z';c = c + 1) {
        if (c < 'K') {
            continue;
        }
        
        cout << c << endl;
    }
    return 0;
}