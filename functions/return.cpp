#include <iostream>
#include <cstdio>
using namespace std;

void log(string text) {
    if(!text.empty()) {
        return;
    }
    cout << "Text: " << text << endl;
}


int main() {
    log("");
    log("Hi!");
    log("ok");

    return 0;
}
abort scalbn fabs gcvt