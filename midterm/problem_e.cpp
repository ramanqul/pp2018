#include <iostream>

using namespace std;

void palindrom(bool ok = true) {
    if (ok) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }
}

bool check(int a[], int n) {
    for (int i=0;i<n/2;i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;

}

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n < 2) {
        palindrom();
        return 0;
    }

    if (check(a, n)) {
        palindrom();
    } else {
        palindrom(false);
    }

   
    return 0;
}