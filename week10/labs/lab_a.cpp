#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    //3,1, 4, 0
    //sorting: 0, 1, 3, 4
    
    //iterators

    sort(v.begin(), v.end());

    
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    
}