# include <iostream>
using namespace std;

int main () {
    auto a = 1;
    auto b = 1.2;
    auto c = false;

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;


    return 0;
}