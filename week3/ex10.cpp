#include<iostream>

using namespace std;


int main() {
    //- finding sum of all elements inside array

    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int a[n]; //declaration

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int sum = 0;

    for(int i=1; i<=n; i++){
       sum = sum + a[i];
    } 

    cout<<sum << endl;

    
    

    return 0;
}