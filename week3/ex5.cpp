#include<iostream>

using namespace std;


int main() {

    int a = 10; 
    int b = 5;

    int max = a;

    if (b > max) {
        max = b;
    }  

    cout << max << endl;

  
    int c = 15;

    if (b > max) {
        max = b;
    } else if (c > max) {
        max = c;
    }

    cout << max;

    //a,b,c,d,e,f ... 50

    int grades[50];


    return 0;
}