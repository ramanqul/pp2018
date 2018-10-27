#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//reverse vector
int main() {

    vector<int> v;

    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a); 
    }

    int rangeBegin, rangeEnd;
    cin >> rangeBegin >> rangeEnd;

    //3,1, 4, 0
    //sorting: 0, 1, 3, 4
    
    //iterators

    vector<int>::iterator beginIt, endIt;

    beginIt = v.begin() + rangeBegin;
    endIt = v.begin() + rangeEnd + 1;

    reverse(beginIt, endIt);
    
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    
}