#include <iostream>
#include <vector>

//#define MAX(a, b, c) max(a, max(a, b))
//#define LIMIT 1000
using namespace std;

bool isPrime(int n) {
    
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
    
}

void printPrimesOnly(vector<int> v) {
    cout << "Printing prime number only:" << endl;

    for(int i = 0; i < v.size(); i++)
    {
        if (isPrime(v[i])) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
    
}


int main() {
    vector<int> v1;

    int a;
    //Ctrl + X (for Windows), Ctrl + D (for Linux)
    while (cin >> a) {
        v1.push_back(a); //add number to the end of vector
    }

    printPrimesOnly(v1);

    return 0;
}
