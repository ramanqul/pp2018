#include <iostream>
#include <vector>

using namespace std;

/*
Create a directory of students.
Menu:
1. Add student
2. Modify student
3. Remove student
4. Search by name
5. Search by lastname
6. Print Info
7. Exit

Use vectors and struct to store info about each student.

*/

struct student {

    string firstname;
    string lastname;
    string gender;
    // some other datas

};

void printStudentInfo(student s) {
    cout << "Student: " << endl;
    cout << s.firstname << " " << s.lastname << endl;
}

void printMenu() {
    cout << "1. Add student" << endl;
    cout << "2. Modify student" << endl;
    cout << "3. Remove student" << endl;
    cout << "4. Search by name" << endl;
    cout << "5. Search by lastname" << endl;
    cout << "6. Print Info" << endl;
    cout << "7. Exit" << endl;
}

struct student addStudent() {
    student s;
    cout << "Enter student firstname: " << endl;
    cin >> s.firstname;
    cout << "Enter student lastname: " << endl;
    cin >> s.lastname;

    return s;
}

int main() {

    vector<student> ALL_STUDENTS;
    int menu;
    while (menu != 7) {
        printMenu();

        cin >> menu;

        if (menu == 1) {
            student s = addStudent();
            ALL_STUDENTS.push_back(s);
        } else if (menu == 7) {
            break;
        } else if (menu == 6) {

            for (vector<struct student>::iterator it = ALL_STUDENTS.begin();
                it != ALL_STUDENTS.end();
                it++) {

                printStudentInfo(*it);
            }

        } else {
            cout << "wrong menu command!";
        }
    }


    return 0;
}