#include <iostream>
#include <stack>

using namespace std;

int main() {

    string s;
    cin >> s;

    if (s.size() == 0) {
        cout << "YES" << endl;
        return 0;
    }

    stack<char> brackets;

    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (c == '(') {
            brackets.push('(');
        } else {
            if (brackets.size() == 0) {
                cout << "NO" << endl;
                return 0;
            }
            
            brackets.pop();
        }
    }

    if (brackets.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}