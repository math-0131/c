#include <iostream>
#include <cstdio>
using namespace std;

void sayHello() {
    cout << "Hello!\n";
}

void sayHelloTo(string name) {
    cout << "Hello " << name << "!" << endl;
}


string returnHi() {
    return "Hi!";
}

string returnHiTo(string name) {
    return "Hi!" + name + "!"; 
}

int main() {
    sayHello();
    sayHelloTo("Peter");
    sayHelloTo("Hannah");

    string result = returnHi();
    result.append("!!!!!");
    cout << result << endl;

    cout << returnHi() << endl;

    cout << returnHiTo(" Mike");

    return 0;
}

