//constructor example
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



struct point {
    int x;
    int y;

    //zero constructor
    point() {}
    //non-zero constructor
    point(int x, int y) {
        this -> x = x;
        this -> y = y;
    }


    void print() {
        cout << "Point(" << x << "," << y <<")" << endl;
    }

};

int main() {


    point p(10, 10);

    p.print();

    vector<point> v;

    v.push_back(p);

    point p2(10, 11);

    v.push_back(p2);

    //dynamic init of struct

    point *p3;

    //do calc
    int x = 10;
    int y = 13;

    p3 = new point(x, y);


    point p4;

    p4.x = 1;
    p4.y = 1;

    p4.print();


    return 0;
}