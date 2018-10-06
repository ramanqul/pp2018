#include<iostream>

using namespace std;



//insert -- to insert 
//erase - to delete
//append - 
//npos
//copy

int main() {

    string str = "Almaty" ;

    //insert "My " in the beginning

    str.insert(0, "My ");

    cout << str << endl; //My Almaty

    str.erase(str.length() - 1); //My Almat
    
    cout << str << endl; //My Almat

    str.append("y!");
   
    cout << str << endl; //My Almaty!

    if (str.find("Astana") == string::npos) {
        cout << "string Astana was not found!" << endl;
    } else {
        cout << "string Astana was found!" << endl;
    }

    char str2[5];

    str.copy(str2, 2, 0); //copies My word from str

    string str3(str2); //converts char array into string

    cout << str3 << endl;

    return 0;
}