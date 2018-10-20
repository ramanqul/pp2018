#include<iostream>

using namespace std;

//find sum from 1 to n => 1 + 2 + 3 + 4 .. + n
int findSum(int n) {
    int sum = 0;
    for (int i = 1; i<=n;i++) {
        sum = sum + i;
    }
    return sum;
}

int findSumRecursively(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + findSumRecursively(n-1);
}

//quick sort
//merge sort

//intro to recursion
int main() {
    
    int n;
    cin >> n;

    cout << "sum for number n=" << n 
         << " is equal " << findSum(n) << endl;


    cout << "sum for number n=" << n 
         << " is equal " << findSumRecursively(n) << endl;


    return 0;
}