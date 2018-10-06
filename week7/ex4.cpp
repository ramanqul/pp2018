#include<iostream>

using namespace std;


//function is a part of your program which is responsible for some operation

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}




//calculator
int main() {

    while (true) {

        cout << "Menu: " << endl
         << "1. Add" << endl
         << "2. Substract " << endl
         << "3. Multiply " << endl
         << "4. Division " << endl << endl;

        int op;

        cin >> op;

        int a, b;

        if (op == 1) {
            //call add

            cout << "enter two numbers: " << endl;

            cin >> a >> b;    

            printf("%d + %d = %d\n", a, b, add(a, b));



        } else if (op == 2) {
            //call sub
           
            cout << "enter two numbers: " << endl;

            cin >> a >> b;    

            printf("%d - %d = %d\n", a, b, sub(a, b));



        } else if (op == 3) {
            //call multiply
            cout << "enter two numbers: " << endl;

            cin >> a >> b;    

            printf("%d * %d = %d\n", a, b, multiply(a, b));

        } else if (op == 4) {
            //call division
            cout << "enter two numbers: " << endl;

            cin >> a >> b;    

            printf("%d / %d = %d\n", a, b, division(a, b));

        } else {
            cout << "enter correct command!" << endl;
        }





    }


    return 0;
}