#include<iostream>

using namespace std;


int main() {
    //- finding minimum and maximum inside arrays

    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int a[n]; //declaration
    //[0,1,2             n-1]
    //size of array = n
    //a[n-1];
    //initialization
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    /*
    int max = a[0];
    
    for(int index = 0; index < n; index++)
    {
        if (a[index] > max) {
            max = a[index];
        }
    }
    

    cout << max << endl;
    */




    int min = a[0];
    
    for(int index = 1; index < n; index++)
    {
        if (a[index] < min) {
            min = a[index];
        }
    }

    cout << min << endl;

    

    return 0;
}