#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    char a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum = sum + int(a[i]); //adding ascii code of char
    }

    cout << sum;
    
    return 0;
}