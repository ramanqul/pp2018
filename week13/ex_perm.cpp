#include <iostream>
#include <algorithm>

using namespace std;

void nextPermExample() {
    int myints[] = {1,2,3};

    sort (myints, myints+3);

    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
    } while ( next_permutation(myints, myints+3) );

    cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

}

void prevPermExample() {
    int myints[] = {1,2,3};

    sort (myints, myints+3);
    reverse (myints,myints+3);

    cout << "The 3! possible permutations with 3 elements:\n";
    
    do {
        cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
    } while ( prev_permutation(myints,myints+3) );

    cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
}

int main() {
    //nextPermExample();
    prevPermExample();

    return 0;
}