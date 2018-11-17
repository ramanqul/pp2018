#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool hasDigit(string s) {
    
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c >= '0' && c<= '9') {
            return true;
        }
    }
    
    return false;
}

void countIfExample() {
    vector<string> v;
    string s;

    while(cin >> s) {
        v.push_back(s);
    }

    int amount = count_if(v.begin(), v.end(), hasDigit);


    cout << "Input vector has " << amount << " of word(s) with digits" << endl;
}

void rotateExample() {
    vector<int> v;
    cout << "Before rotate:" << endl; 
    for (int i = 1; i < 10; i++) {
        cout << i << " ";
        v.push_back(i);
    }
    cout << endl;

    rotate(v.begin(), v.begin() + 3, v.end());
    cout << "After rotate:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; 
    }
}


void fillExample() {

    vector<int> v(10);

    fill(v.begin(), v.end() - 4, 99);
    fill(v.end()-4, v.end(), 100);
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    

}

void uniqueExample() {
    int len = 5;
    int a[len] = {9,9,1,2,2};

    vector<int> v(a, a + len);

    vector<int>::iterator bound;
    bound = unique(v.begin(), v.end());

    vector<int>::iterator it;
    for(it = v.begin(); it != bound; it++) {
        cout << (*it) << " ";
    }

}

void printIt(int a) {
    cout << a << " ";
}

void forEachExample() {
    int len = 5;
    int a[len] = {9,9,1,2,2};

    vector<int> v(a, a + len);

    for_each(v.begin(), v.end(), printIt);
}

int nextRandomNumber() {
    return rand() % 10 + 1;
}

void generateExample() {
    vector<int> v(10);

    srand(time(0));

    generate(v.begin(), v.end(), nextRandomNumber);

    for_each(v.begin(), v.end(), printIt);
}

int main() {

    //countIfExample();
    //rotateExample();
    //fillExample();
    //uniqueExample();
    //forEachExample();
    generateExample();
    
    return 0;
}