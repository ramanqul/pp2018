#include<iostream>

using namespace std;


int main() {

    int a = 10;

    if (10) {
        a = a + 1;
    } else if (10 > 9) {
        a = a + 2;
    }

    // cout << a << endl;

    int b = 15;


    if (b == 20) {
        cout << "B is true!";
    } else if (b == 30) {
        cout << "B is true!";
    } else  if (b == 40) {
        cout << "B is true!";
    } else  {
        cout << "B is false!";
    }



    return 0;
}