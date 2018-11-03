#include <iostream>
#include <queue>

using namespace std;

int main() {
    string s;

    cin >> s;

    queue<char> q;
    
    for(int i = 0; i < s.size(); i++) {
        char c = s[i];
        q.push(c);
    }

    while (!q.empty()) {
        char e = q.front();
        q.pop();

        if (e == '1' && e == q.front()) {
            q.pop();
        } else {
            cout << e;
        }

    }
    
    cout << endl;

    return 0;
}