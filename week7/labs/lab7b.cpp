#include <iostream>
#include <cmath>


using namespace std;

void arrayDiff(int a[], int b[], int d[], int size) {
    for (int i=0;i<size;i++) {
        d[i] = abs(a[i] - b[i]);
    }
}

int main() { 

    // 0 == -0 ? 

    int n;

    cin >> n;
    //array creation
    int a[n], b[n], d[n];

    //reading a[]
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    //reading b[]
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    //calling function 
    arrayDiff(a, b, d, n);

    //displaying resuling array d[]
    for(int i = 0; i < n; i++)
    {
        cout << d[i] << " ";
    }


    return 0;
}