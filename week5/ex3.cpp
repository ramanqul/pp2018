#include<iostream>

using namespace std;


int main() {
    //rows and columns   
    //int a[2][2];
    /*
        0 0
        0 0
    */
    int a[2][2] = {
       {0, 0},
       {0, 0}
    };

    a[0][0] = 0;
    a[0][1] = 0;
    a[1][0] = 0;
    a[1][1] = 0;
    

    
    for(int i = 0; i < 2; i++)
    {
        
        for(int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
        
    }
    


    return 0;
}