#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    string greeting = "Hi!";
    string& ref = greeting;

    cout << greeting << "\t" << ref << endl;

    string name = "Peter";
    ref = name;

    cout << &name << "\t" << &ref << "\t" << &greeting;

    return 0;
}
