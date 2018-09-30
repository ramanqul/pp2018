#include<iostream>

using namespace std;

int main() {

    string str = "Peter has 5 apples. Bob has 4 apples. John has 0 apples.";

    /*
    Output should be:

    Peter has 5 apples.
    Bob has 4 apples.
    John has 0 apples.
    

    2nd problem:

    Peter - 5
    Bob - 4
    John - 0
    
    Total - 9

    */

    
    for(int i = 0; i < str.size(); i++)
    {
        char c = str.at(i);


        if (c == '.') {
            cout << c << endl;
        } else {
            cout << c;
        }
    }
    

    return 0;
}