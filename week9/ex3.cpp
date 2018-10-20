#include<iostream>

using namespace std;

/*

    Given some string: abc123def
    filter out all non letter characters
    result: abcdef

*/
//filters out string from non-letter characters
string filterOut(string s) {
    string result = ""; //empty string

    for(int i = 0; i < s.size(); i++) {
        //if s[i] is letter
        if (
            (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z')) {
                result = result + s[i];
        }
    }

    /*
        input a1b
        0. result = "";
        1. result = result + 'a'
        2. result = 'a'; in this step we skip char '1'
        3. result = result + 'b'

        resulting result = 'ab'
    */

    return result;
}

string filterOutRec(string s, int i) {
    //break statement
    
    if (i >= s.size()) {
       return "";
    }
    
    //if character s[i] is letter
    if ( (s[i] >= 'a' && s[i] <= 'z') 
            || (s[i] >= 'A' && s[i] <= 'Z')) {    
            return s[i] + filterOutRec(s, i + 1);
    }

    return filterOutRec(s, i + 1);
}

//filtering a string
int main() {

    string s;

    cin >> s;

    cout << "iterative: " << s << " filtered is " << filterOut(s) << endl;
    cout << "recursive: " << s << " filtered is " << filterOutRec(s, 0) << endl;

    return 0;
}