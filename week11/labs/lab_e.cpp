#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> repetitions;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (repetitions[s]) {
            repetitions[s]++;
        } else {
            repetitions[s] = 1;
        }
    }
    
    int amount = 0;

    for(map<string, int>::iterator it = repetitions.begin(); 
        it != repetitions.end(); 
        it++) {

        pair<string, int> p = *it;    

        if (p.second == 3) {
            amount ++;
        }
    }

    cout << amount << endl;
    


    return 0;
}