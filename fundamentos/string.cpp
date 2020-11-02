#include <iostream>
using namespace std;

int main() {
    string title = "Mr. ";
    string name = "John";
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;
    cout << end << endl;
    
    name += " Doe";
    name.append("???");

    
    cout << title + name << endl;


    return 0;
}