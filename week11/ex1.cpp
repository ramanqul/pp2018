#include <iostream>
#include <map>


using namespace std;

int main() {
    map<string, string> mymap;

    mymap["neo"] = "Mr. Anderson";
    mymap["ramanqul"] = "Mr. Buzaubakov";

    cout << mymap["neo"] << endl;
    
    return 0;
}