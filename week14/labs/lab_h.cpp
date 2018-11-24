#include<iostream>
#include <cmath>

using namespace std;


struct circle {
    int x;
    int y;
    int r;

    circle() {}
    circle(int x, int y, int r) {
        this -> x = x;
        this -> y = y;
        this -> r = r;
    }

    void readInput() {
        int x, y, r;
        cin >> x >> y >> r;

        this -> x = x;
        this -> y = y;
        this -> r = r;
    }

    double distanceTo(circle *c2) {
        int diffX = this->x - c2->x;
        int diffY = this->y - c2->y;
        
        // cout << "diffX=" << diffX << endl;
        // cout << "diffY=" << diffY << endl;
        
        return sqrt(diffX * diffX + diffY * diffY);
    }

    bool intersects(circle *c) {
        double d = distanceTo(c);
        int rSum = this -> r + c->r;
        return d <= rSum;
    }

    void print() {
        cout << "Circle(x=" << x << ",y=" << y << ",r=" << r << ")" << endl;
    }
};

int main() {

    int n;
    cin >> n;

    circle circles[n];

    for(int i = 0; i < n; i++) {
        circles[i].readInput();
    }
    
    // for(int i = 0; i < n; i++) {
    //     circles[i].print();
    // }


    int indexA, indexB;
    
    cin >> indexA >> indexB;

    if (circles[indexA-1].intersects(&circles[indexB-1])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}