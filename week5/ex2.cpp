#include<iostream>

using namespace std;


int main() {

    int n;
    cin >> n;


    int i = 0;
    int j = 0;
    

    while (i < n) {
        j = 0;

        while (j < n) {
            cout << i << " " << j << " - ";
            j++;
        }
        cout << endl;
        i = i + 1;
    }


    

    return 0;
}