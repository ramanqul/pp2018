#include <iostream>
#include <map>


using namespace std;

void printStudentsBetween(map<string, int> students, string startId, string endId) {
    map<string, int>::iterator it1 = students.find(startId);
    map<string, int>::iterator it2 = students.find(endId);
    
    for (; it1 != it2; it1++) {
        pair<string, int> item = *it1;

        cout << "Student ID: " << item.first << " has mark " << item.second << endl;
    }

    pair<string, int> item = *it2;

    cout << "Student ID: " << item.first << " has mark " << item.second << endl;   
}

void printStudents(map<string, int> students) {
    for (map<string, int>::iterator it = students.begin(); 
        it != students.end(); 
        it++) {
        pair<string, int> item = *it;

        cout << "Student ID: " << item.first << " has mark " << item.second << endl;
    }
}

int main() {
    map<string, int> students;

    //similar to working with arrays
    students["14BD001"] = 100;
    students["14BD002"] = 80;
    students["14BD003"] = 90;

    pair<string, int> student05("14BD005", 99);
    students.insert(student05);

    students.insert(make_pair("14BD004", 50));

    cout << "size of map: " << students.size() << endl;

    printStudents(students);

    cout << "------" << endl;

    printStudentsBetween(students, "14BD001", "14BD003");
    
    return 0;
}