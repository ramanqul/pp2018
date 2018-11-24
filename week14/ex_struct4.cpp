//nested struct


#include<iostream>
#include<vector>

using namespace std;

struct person {
    string name;
    person *parent;
    vector<person*> children;
    
    person(string name) {
        this -> name = name;
    }

    person(string name, person *parent) {
        this -> name = name;
        this -> parent = parent;
    }

    void addChild(person* child) {
        children.push_back(child);
    }

    void printFamily() {
        for(int i = 0; i < children.size(); i++)
        {
            cout << " " << children[i] -> name;
        }
    }
};

void printPersonFamilyTree(person *p, int depth) {
    for(int i=0;i<depth;i++) {
        cout << " "; 
    }

    cout << p->name << " -> ";
    
    p -> printFamily();

    cout << endl;

    if (p->parent) {
        printPersonFamilyTree(p->parent, depth + 1);
    }
}

int main() {

    person p1("P1");
    person p2("P2", &p1);
    person p3("P3", &p2);
    person p4("P4", &p3);
    
    person c41("C41");
    person c42("C42");
    person c43("C43");
    
    p4.addChild(&c41);
    p4.addChild(&c42);
    p4.addChild(&c43);

    printPersonFamilyTree(&p4, 0);

    return 0;
}