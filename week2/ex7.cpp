#include<iostream>

using namespace std;


int main() {

    bool a = true;
    /*
    for (; a == true;) {
        cout << "Hello" << " World!" << endl;
        a = false;
    }
    */
   /*
    while (a == true) {
        cout << "Hello" << " World!" << endl;
        a = false;
    }
    */
    
    do {
        cout << "Hello" << " World!" << endl;
        a = true;
    } while (a == false);


    return 0;
}