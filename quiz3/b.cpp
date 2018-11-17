#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (char c = 'a';c <= 'z';c++) {
        if (s1.find(c) == string::npos &&
            s2.find(c) == string::npos && 
            s3.find(c) == string::npos
        ) {
            cout << c;
        }
    }

    return 0;
}