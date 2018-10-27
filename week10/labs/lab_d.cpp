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


    int k;

    cin >> k;


    vector<int>::iterator it = v.begin() + k;

    v.erase(it);
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    
}