#include <iostream>
#include <cstdio>
using namespace std;


int main() {

    int a;
    cout << "Enter the first number: ";
    cin >> a;

    int b;
    cout << "Enter the second number: ";
    cin >> b;

    int c;
    cout << "Enter the third number: ";
    cin >> c;

    

    if(a > c&&b) {
        cout << a << " is the biggest number" << endl;
    }

    

    if(b > c&&a) {
        cout << b << " is the biggest number" << endl;
    }
    

    if(c > a&&b) {
        cout << c << " is the biggest number" << endl;
    }

    return 0;
}
