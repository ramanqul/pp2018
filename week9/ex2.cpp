#include<iostream>

using namespace std;

//iterative solution
int findMax(int a[], int n) {
    int temp = a[0];

    for(int i = 1; i < n; i++) {
        if (a[i] > temp) {
            temp = a[i];
        }
    }

    return temp;
}
//recursive solution
int findMaxRec(int a[], int n, int i, int m) {
    //break statement
    if (i >= n) {
        return m;
    }

    if (a[ i ] > m) {
        return findMaxRec(a, n, i + 1, a[i]);
    }

    return findMaxRec(a, n, i + 1, m);
}


//finding max
int main() {
    
    int n;
    cin >> n;

    int a[n];

    //reading input from user
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = findMax(a, n);

    cout << "iterative max = " << max << endl;

    max = findMaxRec(a, n, 0, a[0]);

    cout << "recursive max = " << max << endl;
    

    return 0;
}