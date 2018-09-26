#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;

    for(int i= 0; i < n;i++) {
    
        cin >> a[i];
        
        if(max1 == 0) {
            max1 = a[i];
        } else {
            if (a[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2) {
                max3 = max2;
                max2 = a[i];
            } else if (a[i] > max3) {
                max3 = a[i];
            }
        }
    }
    
    int sum = max1 + max2 + max3;

    cout << sum;
    
    return 0;
}