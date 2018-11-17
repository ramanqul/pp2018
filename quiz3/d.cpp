#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    char cur = s[0];
    char prev = cur;
    int counter = 1;

    stringstream ss;
    
    for(int i = 0; i < s.size(); i++)
    {
        cur = s[i];    
        if (i > 0) {
            if (cur - prev == 1) {
                counter++;
            } else {
                if (counter > 1) {
                    ss << counter;
                } else {
                    ss << prev;
                }
                counter = 1;
            }
        }

        prev = cur;
    }

    if (counter > 1) {
        ss << counter;
    } else {
        ss << prev;
    }

    cout << ss.str() << endl;

    return 0;
}