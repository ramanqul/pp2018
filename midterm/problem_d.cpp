#include <iostream>

using namespace std;

int pow(int x, int y) {
    
    int result = 1;

    for(int i = 0; i < y; i++)
    {
        result = result * x;    
    }
    
    return result;
}

int binaryArrayToN(int a[], int size) {
    int N = 0;

    for(int i = 0; i < size; i++)
    {
        N = N + a[i] * pow(2, i);
    }
    
    return N;
}

void nToBinaryArray(int a[], int size, int n) {
    int N = n;

    for(int i = 0; N > 0; i++) {
        int remainder = N % 2;
        a[i] = remainder;
        N = N / 2;
    }
}

int printArr(int a[], int size) {
    
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    
}

int main() {

    int n;
    cin >> n;

    int size = 8;
    int a[size] = {0, 0, 0, 0, 0, 0, 0, 0};

    nToBinaryArray(a, size, n);

    printArr(a, size);
    
    //flip right most zero
    for(int i = size - 1; i >= 0; i--)
    {
        if (a[i] == 0) {
            a[i] = 1;
            break;
        }
    }
    
    printArr(a, size);

    int newN = binaryArrayToN(a, size);

    cout << newN;

    return 0;
}