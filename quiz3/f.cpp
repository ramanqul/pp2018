#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    
    string name;
    int score;

    map<string, int> scores;

    while (cin >> name) {
        cin >> score;

        if (scores[name]) {
            int curScore = scores[name];
            if (curScore < score) {
                scores[name] = score;
            } 
        } else {
            //inserting student first time
            scores[name] = score;
        }
    }

    for (map<string, int>::iterator it = scores.begin(); it != scores.end();it++) {

        pair<string, int> student = *it;

        cout << student.first << " " << student.second << endl;

    }

    return 0;
}