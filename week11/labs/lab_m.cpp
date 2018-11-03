#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<string> dq;
    
    for(int i = 0; i < n; i++)
    {
        int action;

        cin >> action;

        if (action == 1) {
            string name;
            cin >> name;

            dq.push_back(name);
        } else {
            if (!dq.empty()) {
                dq.pop_front();
            }
        }
        if (dq.empty()) {
            cout << "queue is empty" << endl;
        } else {
            cout << dq.front() << endl;
        }
    }

    return 0;
}