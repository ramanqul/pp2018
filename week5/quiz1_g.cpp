#include<iostream>

using namespace std;


int main() {

    int year;
    cin >> year;
    
    while (true) {
        //find out if the increased year has different digits
        //d4d3d2d1 - year representation
        //1231

        int d1 = 0;
        int d2 = 0;
        int d3 = 0;
        int d4 = 0;

        d1 = year % 10;
        d2 = (year % 100) / 10;
        d3 = (year % 1000) / 100;
        d4 = year / 1000;


        if (d1 != d2 && d2 != d3 && d3 != d4
            && d1 != d3 && d1 != d4
            && d2 != d4) {
                cout << d4 << d3 << d2 << d1;
                break;
        }

        year = year + 1;
    }


    return 0;
}