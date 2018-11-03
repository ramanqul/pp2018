//example using dequeue
// First In First Out

//Methods: push_front, push_back, back, size, empty

//difference you can get element from both ends (pop_front, pop_back)

//example using queue
// First In First Out

//Methods: push_front, push_back, pop, front, back, size, empty

#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> q;

    q.push_back(1); //1
    q.push_front(2); //2, 1
    q.push_back(3); //2,1,3
    q.push_front(4); //4,2,1,3
    

    cout << "size of queue " << q.size() << endl;
    cout << "is queue empty " << q.empty() << endl;

    cout << "the first element in queue " << q.front() << endl;
    cout << "the last element in queue " << q.back() << endl;

    while (!q.empty()) {
        int e = q.back();

        cout << e << " ";
        
        q.pop_back();
    }

    cout << endl;


    return 0;
}

