#include<iostream>


using namespace std;

int convertStringToInt(string numberAsString) {
    char c = numberAsString.at(0);

    return c - '0';
}

int getApplesAmountFromStr(string str, int fromIndex) {

    int apples = 0;

    int applesPosition = str.find("apples", fromIndex);
    int hasWordPosition = str.find("has", fromIndex);

    string s1 = str.substr(hasWordPosition + 4, 1); //number of apples but in string form
    //convert string to number?
    apples = convertStringToInt(s1);

    return apples;
}

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
    // cout << name1 << endl;
    // cout << name2 << endl;
    // cout << name3 << endl;
    

    int petersApples = getApplesAmountFromStr(str, 0);
    int bobsApples = getApplesAmountFromStr(str, 13);
    int johnApples = getApplesAmountFromStr(str, 31);

    cout << name1 << " - " << petersApples << endl;
    cout << name2 << " - " << bobsApples << endl;
    cout << name3 << " - " << johnApples << endl;
    cout << "Total" << " - " << (petersApples + bobsApples + johnApples ) << endl;


    return 0;
}