#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    set<char> s;

    for(int i = 0; i < str.size(); i++)
    {
        char c = tolower(str[i]);
        s.insert(c);
    }
    
    cout << s.size() << endl;

    for(set<char>::iterator it = s.begin();it != s.end();it++) {
        cout << *it <<" ";
    }
    cout << endl;
 
}