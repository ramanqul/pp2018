#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    set<char> res;
    
    for (char c = 'A';c <= 'Z';c++) {
        if (s1.find(c) != string::npos &&
            s2.find(c) != string::npos && 
            s3.find(c) != string::npos
        ) {
            res.insert(c);
        }
    }

    for (char c = 'a';c <= 'z';c++) {
        if (s1.find(c) != string::npos &&
            s2.find(c) != string::npos && 
            s3.find(c) != string::npos
        ) {
            res.insert(c);
        }
    }

    for (char c = '0';c <= '9';c++) {
        if (s1.find(c) != string::npos &&
            s2.find(c) != string::npos && 
            s3.find(c) != string::npos
        ) {
            res.insert(c);
        }
    }

    

    for(set<char>::iterator it=res.begin();it != res.end();it++) {
        cout << *it;
    }

    cout << endl;

    return 0;
}