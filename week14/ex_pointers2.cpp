#include <iostream>

using namespace std;

//expecting here original variable itself
void passByRef1(int &a) {
    a = a + 10;
    cout << "modified a=" << a << endl;
}

void passByRef2(string &s) {
    s = s + "!";
    cout << "modified s=" << s << endl;
}

//reference example
int main() {
    int a = 100;
    string s = "PP1";

    cout << "before a=" << a << endl;
    cout << "before s=" << s << endl;

    passByRef1(a);
    cout << "after passing to function a=" << a << endl;

    passByRef2(s);
    cout << "after passing to function s=" << s << endl;



    return 0;
}