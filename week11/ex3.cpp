#include <iostream>
#include <stack>

using namespace std;
//example using stack
// Last In First Out

//Methods: push, top, pop, size, empty

int main() {

    stack<int> mystack;

    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);


    
    for(int i= mystack.top();!mystack.empty();i = mystack.top()) {
        cout << i << endl;
        mystack.pop();
    }
    

    return 0;
}