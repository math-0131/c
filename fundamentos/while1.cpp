#include <iostream>
#include <cstdio>
using namespace std;


int main() {

    int number = 0;
    int total = 0;
    while(number != -1) {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;
        if(number != -1) {
            total += number;
        }
    }

    return 0;
}
