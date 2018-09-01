#include <iostream>

using namespace std;

int main() {
	char c = 'a';
	
	cout << c << " " << int(c) << endl;
	
	
	string s1, s2; // s1 = "hello world" s2 = "abc"
    
	cin >> s1 >> s2; // s1 = "45" s2 = "5"
	cout << s1 + s2;

	return 0;
}