//struct with operator overloading
#include <iostream>

using namespace std;

struct person {
    string name;
    int age;

    person() {}
    person(string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    bool operator<(const person &p) {
        return this->age < p.age;
    }

    bool operator>(const person &p) {
        return this->age > p.age;
    }

    bool operator==(const person &p) {
        return this->age == p.age && this -> name == p.name;
    }

};

int main() {

    person p1("Zaur", 19);
    person p2("Nur", 18);
    person p3("Zaur", 19);

    if (p1 < p2) {
        cout << p2.name << " is older than " << p1.name << endl; 
    } else {
        cout << p1.name << " is older than " << p2.name << endl; 
    }

    if (p1 == p2) {
        cout << "p1 and p3 are the same person" << endl;
    }

    return 0;
}