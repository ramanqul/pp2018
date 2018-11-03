#include <iostream>

using namespace std;

struct person {
    string name;
    string lastname;
    int age;
    string gender;
    string phone;
    string address;
};


void printInfo(person p) {
    cout << "Person: " << p.name << " " << p.lastname
         << ", has age " << p.age << " years,"
         << "gender is " << p.gender << endl; 
}

void printInfo(string name, string lastname, int age, string gender) {
    cout << "Person: " << name << " " << lastname
         << ", has age " << age << " years,"
         << "gender is " << gender << endl; 
}

int main() {

    printInfo("Raman", "Buzaubakov", 29, "male");

    person p;
    p.name = "Raman";
    p.lastname = "Buzaubakov";
    p.age = 29;
    p.gender = "male";
    p.phone = "123123123";
    p.address = "Almaty";

    printInfo(p);

    return 0;
}