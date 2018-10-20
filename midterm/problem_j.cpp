#include <iostream>

using namespace std;

int abs(int a) {
    if (a < 0) {
        return -a;
    }

    return a;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    int diff1 = abs(a - b);
    int diff2 = 360 - max(a, b);
    
    int result = min(diff1, diff2);

    cout << result << endl;

    return 0;
}