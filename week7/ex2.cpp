#include<iostream>

using namespace std;



//string constructor
//constructor is a code block which is called once during object creation [OOP]
int main() {

    string str;
    cin >> str;

    string str2("abc"); //another way of creating a string

    //modify str2
    str2.insert(0, "$");

    //what will happen with str?

    cout << str << endl;
    cout << str2 << endl;

   
    return 0;
}