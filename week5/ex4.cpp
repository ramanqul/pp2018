#include<iostream>

using namespace std;


int main() {
    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    for (int row = 0;row < n; row = row + 1) {
        for (int col = 0; col < m; col = col + 1) {
            if (row == n - 1) {
                a[row][col] = 10000;
            } else if (row == n - 2) {
                a[row][col] = 5000;
            } else {
                a[row][col] = 1000;
            }
        }
    }


    for (int row = 0;row < n; row = row + 1) {
        for (int col = 0; col < m; col = col + 1) {
            cout << a[row] [col] << " ";
        }
        cout << endl;
    }
    return 0;
}