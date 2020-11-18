#include <iostream>
#include <cstdio>
using namespace std;

void incCopy(int value) {
    value++;
    value++;
    value++;
}

void incRef(int& value) {
    value++;
    value++;
    value++;
}

int main() {
    int x = 1;

    incRef(x);

    cout << x << endl;

    return 0;
}
