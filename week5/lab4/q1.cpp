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
    
    int max = a[0][0];
    int min = a[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i][j] > max) {
                max = a[i][j];
            }       

            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    cout << "max=" << max << endl;
    cout << "min=" << min << endl;

    return 0;
}