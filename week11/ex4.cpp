//example using queue
// First In First Out

//Methods: push, pop, front, back, size, empty

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout << "size of queue " << q.size() << endl;
    cout << "is queue empty " << q.empty() << endl;

    cout << "the first element in queue " << q.front() << endl;
    cout << "the last element in queue " << q.back() << endl;

    while (!q.empty()) {
        int e = q.front();

        cout << e << " ";
        
        q.pop();
    }

    cout << endl;


    return 0;
}

