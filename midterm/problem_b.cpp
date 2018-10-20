#include <iostream>

using namespace std;

bool validChar(char c) {
    return c >= 'a' && c <='z';
}

bool validEmail(string s) {
    int p1 = -1, p2 = -1;
    string result = "";
    
    for (int i=0;i<s.size();i++) {
        if (!validChar(s[i])) {
            if (s[i] == '@' && p1 == -1) {
                p1 = i;
                cout << "p1 = " << p1 << endl;
            } else if (s[i] == '.' && p2 == -1 && i > p1) {
                p2 = i;
                cout << "p2 = " << p2 << endl;
            } else {
                return false;           
            }
        }

        result += s[i];
    }

    cout << result << endl;

    return p1 != -1 
        && p2 - p1 > 1 
        && s.size() - p2 > 0 
        && s == result;
}

int main() {

    string s;
    cin >> s;

    bool ok = validEmail(s);

    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }


    return 0;
}