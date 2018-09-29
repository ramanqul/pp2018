#include<iostream>

using namespace std;


int main() {

    // int n;
    // cin >> n;

    //1st for loop
    for (char row ='a'; row <= 'h'; row = row + 1) {
        cout << row << " ";
        //2nd for loop
        for (int col=0;col<=8;col++) {
            if (col == 0) {
                cout << row << " ";
            } else {
                cout << col << " ";
            }
        }
        
        cout << endl;
    }


    

    return 0;
}