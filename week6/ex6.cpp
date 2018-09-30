#include<iostream>

using namespace std;

int main() {

    string str = "Peter has 5 apples. Bob has 4 apples. John has 0 apples.";

    int position = str.find("apples", 0);
    
    cout << position << endl;

    return 0;
}