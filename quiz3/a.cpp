#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

bool isAnagram(string source, string input) {
    if (source.size() != input.size()) {
        return false;
    }

    int len = 26;
    int a[len];
    int b[len];

    fill_n(a, len, 0);
    fill_n(b, len, 0);

    for(int i = 0; i < source.size();i++) {
        char c = source[i];
        a[c-'a']++;
    }

    for(int i = 0; i < input.size();i++) {
        char c = input[i];
        b[c-'a']++;
    }

    
    for(int i = 0; i < len; i++)
    {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    set<string> res;

    string q;

    while (cin >> q) {
        bool exists = res.find(q) != res.end();
        if (!exists && !isAnagram(s, q)) {
            res.insert(q);
        }
    }

    for(set<string>::iterator it=res.begin();it != res.end();it++) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}