#include <iostream>

using namespace std;

void modifyInt(int x) {
    x = 123;
}

void modifyArray(int a[]) { 
    a[0] = 123;
}

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {

    int n;
    cin >> n;

    int a[n];

    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Printing initial values" << endl;
    printArray(a, n);
    
    modifyArray(a); //pass a reference

    cout << "Printing modified values" << endl;
    printArray(a, n);
    
    int x = 100;

    cout << "Default value for x=" << x << endl;

    modifyInt(x); //pass a value

    cout << "Printing modified x=" << x << endl;

    return 0;
}