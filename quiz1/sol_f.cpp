#include <iostream>

using namespace std;

int main() {
    int n, k, a;
    
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (i != k) {
            cout << a << " ";
        }
    }

    return 0;
}