#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


const pair<int, int> pointA(1, 1);

void printIt(pair<int, int> point) {
    cout << " " << " (" << point.first << "," << point.second << ")";
}

pair<int, int> genRandomPoint() {
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;

    return pair<int, int>(x, y);
}


double calcDistance(pair<int, int> p1, pair<int, int> p2) {
    int diffX = (p1.first - p2.first);
    int diffY = (p1.second - p2.second);
    
    return sqrt(diffX * diffX + diffY * diffY);
}

bool compareByDistance(const pair<int, int> &p1, const pair<int, int> &p2) {
    double d1 = calcDistance(pointA, p1);
    double d2 = calcDistance(pointA, p2);

    //cout << "d1=" << d1 << ", d2=" << d2 << endl;

    return d1 < d2;
}

int main() {
    srand(time(0));
    
    vector<pair<int, int> > points(10);

    generate(points.begin(), points.end(), genRandomPoint);

    cout << endl << "Initial point:" << endl;
    for_each(points.begin(), points.end(), printIt);

    sort(points.begin(), points.end(), compareByDistance);
    
    cout << endl << "Points after:" << endl;

    for_each(points.begin(), points.end(), printIt);

    return 0;
}