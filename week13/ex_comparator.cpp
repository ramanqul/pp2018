#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    string name;
    int score;

    bool operator<(const student& s) {
        return score < s.score;
    }
};

void printIt(student s) {
    cout << "Student " << s.name << " has score " << s.score << endl;
}

int main() {

    vector<student> v;
    student s1;
    s1.name = "Student 1";
    s1.score = 90;

    student s2;
    s2.name = "Student 2";
    s2.score = 50;
    
    student s3;
    s3.name = "Student 3";
    s3.score = 70;

    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    
    sort(v.begin(), v.end());

    for_each(v.begin(), v.end(), printIt);

    return 0;
}