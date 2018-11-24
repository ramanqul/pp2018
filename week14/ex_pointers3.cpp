#include <iostream>

using namespace std;


void passByP(int *a) {
    *a = *a + 10;
    cout << "modified *a=" << *a << endl;
}

struct address {
    string street;
    int no;
};

struct person {
    string name;
    string lastname;
    address *livingAddress;
};


void printAddress(address a) {
    cout << " Address street is " << a.street << " with number " << a.no << endl;
}

void printPerson(person p) {
    cout << " Person with name " << p.name << " and lastname " << p.lastname;
    printAddress(*p.livingAddress); 
}

//pointers
int main_old() {

    // int n = 1;
    
    // cout << "before n=" << n << endl;
    // passByP(&n);
    // cout << "after n=" << n << endl;

    address a;
    a.street = "Tole bi";
    a.no = 59;

    person zaur;
    zaur.name = "Zaur";
    zaur.lastname = "B";
    zaur.livingAddress = &a;

    printPerson(zaur);

    a.street = "Abai";

    printPerson(zaur);

    return 0;
}


int main() {
    int a = 10;
    int *b = &a;

    a = 20;

    cout << a << " "  << *b; 

    return 0;
}