#include<iostream>

using namespace std;


int main() {
    
    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int a[n]; //declaration
    
    //initialization
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cout<<  a[i] << ", ";
    }

    cout << endl;


    return 0;
}