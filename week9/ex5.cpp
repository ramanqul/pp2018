#include<iostream>
#include <sstream>
#include <cstdio>

using namespace std;
    /*
        Given a number n which shoud be converted to binary string
        input 10 => output 1010
    
    */

string reverseIt(string s) {
    string result = "";
    
    for(int i = s.size() - 1; i >= 0; i = i - 1) {
        result = result + s[i];
    }
    
    return result;
}

string convertBin(int n) {
    stringstream result;

    for(/* int i is skipped */; n != 0; n = n / 2) {
        result << (n % 2);    
    }

    return reverseIt(result.str());
}

string convertBinRec(int n) {
    if (n == 0) {
        return "";
    }

    return convertBinRec(n / 2) + sprintf("%d", (n % 2));
}


//Converting number to binary representation
int main() {
    int n;
    cin >> n;

    cout << "iterative: " << n << " binary string is " << convertBin(n) << endl;
    cout << "recursive: " << n << " binary string is " << convertBinRec(n) << endl;


    return 0;
}