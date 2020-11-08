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

    

    if(a > c && a > b) {
        cout << a << " is the biggest number" << endl;
    } else {
        cout << "else 1 " << endl;
        if(b > c && b > a) {
            cout << b << " is the biggest number" << endl;
        } else {
            cout << "else 2 " << endl;
            if(c > a && c > b ) {
                cout << "else 3 " << endl;
                cout << c << " is the biggest number" << endl;
            }
        }

        


    }
    return 0;
}
