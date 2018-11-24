#include <iostream>

using namespace std;



void printArray(int a[], int size) {
    
    for(int i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;
    
}

int main() {
    int a[4];
    int *b = a;
    printArray(a, 4);

    // *b = 100;

    // b++;

    // *b = 200;

    // *(b + 2) = 300;

    for (int i=1;i<5;i++) {
        *(b + i - 1) = i * 100;
    }

    printArray(a, 4);


    return 0;
}