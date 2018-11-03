#include <iostream>

using namespace std;

void modifyStringPointer(string* s) {
    *s = *s + "!!";
}

void modifyString(string &s) {
    s = s + "!";
}

void modifyPointerReference(string*& s) {
    s = s + 1;
}

int main() {
    string s = "hello";
    
    modifyString(s);
    
    cout << s << endl;

    modifyStringPointer(&s);

    cout << s << endl;

    string* p = &s;

    cout << p << endl;

    modifyPointerReference(p);

    cout << p << endl;


    return 0;
}