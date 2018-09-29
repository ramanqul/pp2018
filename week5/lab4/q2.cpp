#include<iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    long a[n][n];

    //reading array n by n
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }   
    }
    
    int max1 = a[0][0];
    int min1 = a[0][0];

    int max2 = max1;
    int min2 = min1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i][j] > max1) {
                max2 = max1;
                max1 = a[i][j];
            } else if (a[i][j] > max2 && a[i][j] != max1) {
                max2 = a[i][j];
            }      

            if (a[i][j] < min1) {
                min2 = min1;
                min1 = a[i][j];
            } else if (a[i][j] < min2 && a[i][j] != min1) {
                min2 = a[i][j];
            }
        }
    }

    cout << "max1=" << max1 << endl;
    cout << "min1=" << min1 << endl;

    cout << "max2=" << max2 << endl;
    cout << "min2=" << min2 << endl;

    if (max1 == max2) {
        cout << "max1=max2" << endl;
    }

    return 0;
}