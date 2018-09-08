#include<iostream>

using namespace std;


int main() {

    int a;
    cin >> a;

    if (a == 0) {

        cout<< "None";
    } else {

        a = a%2;
        if (a=0) {
            cout << "ODD" ;

        } else { cout << "Even";}
    }

    return 0;
}