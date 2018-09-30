#include<iostream>

using namespace std;
//substr
int main() {

    string str = "Peter has 5 apples.Bob has 4 apples.John has 0 apples.";

    int position = str.find("apples", 0);
    
    int peterPos = str.find(" ", 0);

    string name1 = str.substr(0, peterPos);

    int dotPos = str.find(".", 0);
    int name2SpacePos = str.find(" ", dotPos);

    string name2 = str.substr(dotPos+1, name2SpacePos - dotPos-1);


    int dotpos2=str.find("." , dotPos + 1);

    int spacepos3=str.find(" ", dotpos2);

    cout << "size of str " << str.size() << endl;
    cout << "pos1 " << dotpos2 << ", space pos " << spacepos3<<endl;

    string name3 = str.substr(dotpos2 + 1, spacepos3 - dotpos2 - 1);


    // string str2 = str.substr(position, 6);

    // cout << position << endl;
    //cout << str2 << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;
    
    return 0;
}