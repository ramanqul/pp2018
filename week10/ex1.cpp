#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    //fill_n(a, n, 0);
    
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    
    int someValue;
    int indexCounter = 0;


    while (cin >> someValue) {
        a[indexCounter++] = someValue;

        if (indexCounter >= n) {
            //resize my array
            int oldN = n;
            n = n + 1; //new size of array
            int b[n];

            //copy old values

            for(int i = 0; i < oldN; i++)
            {
                b[i] = a[i];
            }

            //assign b to a
            int* p1 = a; //pointer to array a
            int* p2 = b; //pointer to array b
            p1 = p2;          
        }

    }


    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    

    return 0;
}