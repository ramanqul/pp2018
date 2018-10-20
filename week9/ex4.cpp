#include<iostream>

using namespace std;
/*
    Give a string, you need to reverse it:
    input abcd => output dcba

*/

string reverseIt(string s) {
    string result = "";
    
    for(int i = s.size() - 1; i >= 0; i = i - 1) {
        result = result + s[i];
    }
    
    return result;
}

string reverseItRec(string s, int i) {
    //abcd => dcba
    if (i >= s.size()) {
        return "";
    }

    return s[s.size() - 1 - i] + reverseItRec(s, i + 1);
}


//reverse string
int main() {

    string s;
    cin >> s;

    cout << "iterative: " << s << " reversed is " << reverseIt(s) << endl;
    cout << "recursive: " << s << " reversed is " << reverseItRec(s, 0) << endl;




    return 0;
}