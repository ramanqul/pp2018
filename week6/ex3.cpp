#include<iostream>

using namespace std;

//finding repetition of letters in a string
int main() {

    string str;

    // cin >> str;
    
    getline(cin, str);

    int N = 26;

    int repetitions[N]; //0-A, 1-B, 2-C, ...

    
    for(int i = 0; i < N; i++)
    {
        repetitions[i] = 0;
    }
    //input: hello
    //['h', 'e', 'l', 'l', 'o']

    cout << "size of string " << str.size() << endl;

    for (int i = 0;i<str.size();i++) {
        char c = str.at(i);
        cout << c << endl;
        int indexOfLetter = c - 'a';
        repetitions[indexOfLetter] = repetitions[indexOfLetter] + 1;
    }

    for (int i = 0;i<N;i++) {
        char c = i + 'a'; 
        if (repetitions[i] > 0) {
            cout << "letter " << c << " repeates " << repetitions[i] << endl; 
        }
    }



    return 0;
}