#include<iostream>

using namespace std;


int main() {


    string str; //declaration
    string name;



    str = "Hello, "; //initialization
    // cin >> name;
    
    getline(cin, name);

    str = str + name; //concationation

    cout << str << endl;

    return 0;
}