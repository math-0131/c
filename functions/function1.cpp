#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello!\n";
}

void sayHelloTo(string name) {
    cout << "Hello " << name << "!" << endl;
}

string returnHi() {
    return "Hi!\n";
}

string returnHiTo(string name) {
    return "Hi " + name + "!";
} 

 int main() {
     sayHello();
     sayHelloTo("Peter");
     sayHelloTo("Hannah");
     cout << returnHi() << endl;
     cout << returnHiTo("Josh");

     return 0;
 }