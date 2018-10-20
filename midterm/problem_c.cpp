#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = a[0] + a[1];

    for (int i=1;i<n-1;i++) {
        mx = max(mx, a[i] + a[i+1]);
    }

    cout << mx;
    

    return 0;
}