#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int arr[] = { 47, 33, 72, 13, 88};
    int* p1 = &arr[0];

    cout << *p1 << endl;

    p1++;
    cout << *p1 << endl;

    p1++;
    cout << *p1 << endl;

    cout << "...." << endl;
    cout << p1[0] << endl;
    cout << p1[1] << endl;
    return 0;
}
