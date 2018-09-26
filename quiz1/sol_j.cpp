#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int min = 1;
    int max = 1;

    if (n > 1) {
        max = n;
    } else {
        min = n;
    }

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}