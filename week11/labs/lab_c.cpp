#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<int, int> repetitions;
    
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (repetitions[a]) {
            repetitions[a]++;
        } else {
            repetitions[a] = 1;
        }
    }
    
    int amount = 0;

    for(map<int, int>::iterator it = repetitions.begin(); 
        it != repetitions.end(); 
        it++) {

        pair<int, int> p = *it;    

        if (p.second >= 2) {
            amount ++;
        }
    }

    cout << amount << endl;
    


    return 0;
}