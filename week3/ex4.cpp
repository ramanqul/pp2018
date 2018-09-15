#include<iostream>

using namespace std;


int main() {
   
    int n = 10;

    int steps = n * n;

    for (int i=0;i<steps;i++) {

        int row = i / n;
        int col = i % n;

        if ( col == 0 || row == n - 1 || col == row ) {
            cout << "*";
        } else {
            cout << " ";
        }

        if (col == n-1) {
            cout << endl;
        } 
    }

    return 0;
}