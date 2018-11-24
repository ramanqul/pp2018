//simple example
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {

    struct point {
        int x;
        int y;

        void print() {
            cout << "Point(" << x << "," << y <<")" << endl;
        }

    };

    point p;
    p.x = 10;
    p.y = 11;

    p.print();

    vector<point> v;

    v.push_back(p);

    point p2;
    p2.x = 10;
    p2.y = 11;

    v.push_back(p2);


    return 0;
}