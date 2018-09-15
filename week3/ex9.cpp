#include<iostream>

using namespace std;


int main() {
    //- reversing elements inside array

    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int a[n]; //declaration

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int j = 0;

    for(int i = n-1; i != j; i = i - 1) {
        int t = a[i];
        a[i] = a[j];
        a[j] =  t;

        j = j + 1;
    }

    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    

    cout << endl;
    
    

    return 0;
}