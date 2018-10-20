#include <iostream>

using namespace std;

int findMultiplier(int a, int b) {
    return  (b / a) * a;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = findMultiplier(a, b);
    
    cout << result;
    
    return 0;
}