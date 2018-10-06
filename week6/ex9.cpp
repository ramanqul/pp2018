#include<iostream>
#include<sstream>

using namespace std;
//sstream
int main() {

    stringstream ss; // like cin

    ss << "test" << " ok" << " 123";

    string s1, s2;

    cout << ss.str() << endl;

    int x;

    ss >> s1;
    ss >> s2;
    ss >> x;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << x << endl;
    
    return 0;
}