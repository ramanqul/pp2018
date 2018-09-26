#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    //reading array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x; //reading X
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    
    cout << count;

    return 0;
}