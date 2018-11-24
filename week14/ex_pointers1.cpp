#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void passByVal(int a) {
    a = a + 10;
    cout << "modified a=" << a << endl;
}

void passByVal2(string s) {
    s = s + "!";
    cout << "modified s=" << s << endl;
}

void passByVal3(pair<int, int> p) {
    p.first = 10;
    p.second = 20;
    cout << "modified p=" << p.first << "," << p.second << endl;
}

void printIt(int i) {
    cout << " " << i;
}

void passByVal4(vector<int> v) {
    v.push_back(100);
    for_each(v.begin(), v.end(), printIt);
}

int main() {
    string text = "PP1";
/*
    int n = 100;
    passByVal(n);// int tmp_n = n; passByVal(tmp_n);

    cout << "after passing value n=" << n << endl;
*/
    // passByVal2(text);

    // cout << "after passing value text=" << text << endl;

    // pair<int, int> p0 = make_pair(1, 2);

    // passByVal3(p0);

    // cout << "original p=" << p0.first << "," << p0.second << endl;

    vector<int> v0;
    v0.push_back(1);
    
    cout << "before:" << endl;
    for_each(v0.begin(), v0.end(), printIt);
    cout << endl;

    passByVal4(v0);
    
    cout << "after:" << endl;
    for_each(v0.begin(), v0.end(), printIt);
    cout << endl;


    return 0;
}