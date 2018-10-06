#include<iostream>

using namespace std;

//fib sequence 
// starts from 0, 1
// next = prev + preprevious
//example, 0+1 = 1
//1 + 1 = 2
//1+2 = 3
//2+3 = 5
//3+5 = 8

int fib(int n) {

    if (n <= 1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }

    //fib(1) => 1
    //fib(2) => fib(1) + fib(0) => 1 + 1 => 2 
    //fib(3) => fib(2) + fib(1) => 2 + 1 => 3
    //fib(4) => fib(3) + fib(2) => 3 + 2 => 5




}


int main() {

    int n;
    cin >> n;

    int result = fib(n);

    printf("fib(%d)=%d\n", n, result);

    return 0;
}