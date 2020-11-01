#include <iostream>
using namespace std;

int main() {
    bool isAdmin =  false;
    cout << isAdmin << endl;

    char symbol = ('#');
    cout << symbol << endl;

    unsigned short int age = 31;
    cout << age << endl;

    float pi = 3.14;
    const double PI = 3.141592;
    cout << pi << endl;
    cout << PI << endl;

    cout << sizeof(char) << " Byte" << endl;
    cout << sizeof(int) << " Byte" << endl;
    cout << sizeof(long int) << " Byte" << endl;
    cout << sizeof(long long int) << " Byte" << endl;
    cout << sizeof(float) << " Byte" << endl;
    cout << sizeof(double) << " Byte" << endl;
    

    return 0;
}