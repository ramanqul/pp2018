#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    stack<int> store;

    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        store.push(a); 
    }
    
    vector<int> even;
    vector<int> odd;

    while (!store.empty()) {
        int b = store.top();

        if (b % 2 == 0) {
            even.push_back(b);
        } else {
            odd.push_back(b);
        }           
        
        store.pop();
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for(vector<int>::reverse_iterator it = even.rbegin();it != even.rend();it++) {
        cout << *it << " ";
    }
    for(vector<int>::iterator it = odd.begin();it != odd.end();it++) {
        cout << *it << " ";
    }

    return 0;
}