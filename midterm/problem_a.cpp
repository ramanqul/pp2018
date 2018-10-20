#include <iostream>

using namespace std;

int main() {
    string s;
    string result = "";

    cin >> s;

    for (int i=0;i<s.size();i++) {
        int index = result.find(s[i]);
        
        //cout << s[i] << "-index-" << index << endl;

        if (index < 0) {
            result += s[i];
        }
    }

    cout << result;

    return 0;
}