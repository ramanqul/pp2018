#include<iostream>

using namespace std;


//DRY - Don't Repeate Yourself

void printSomething() {
    cout << "something..."<<endl;
}

int sum(int a, int b) {
    printSomething();
    return a + b;
}

int fib(int n) {
    //1,1,2,3,5,8,13,...
    //f(x) = f(x-1) + f(x-2)
    /*
            / x = 0 then 1
    f (x) => 
            \ else x + f(x-1)
    */

    if (n <= 1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }

    //input: 5
    //stages: 
    /*
    fib(4) + fib(3)            = 8
    
    fib(4) = fib(3) + fib(2)   = 5
    fib(3) = fib(2) + fib(1)   = 3
    
    fib(2) = fib(1) + fib(0)   = 2
    fib(1) = fib(0) + fib(-1)  = 1
    fib(0) = 1

    */
}
/*
int main() {

    printSomething();

    int a = 10;
    int b = 20;
    int sumOfAnB = sum(a, b);

    cout << "sum of two number is "<< sumOfAnB << endl; 

    return 0;
}
*/

int main() {
    int result = fib(5);

    cout << "fib(5) = " << result << endl;


    return 0;
}

