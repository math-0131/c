# include <iostream>
using namespace std;

int max(int n1, int n2) {
    return n1 >= n2 ? n1 : n2;7
}

int main() {
     int a, b, c;

     cout << "type in the first number: ";
     cin >> a;

     cout << "type in the second number: ";
     cin >> b;
     
     cout << "type in the third number: ";
     cin >> c;

     cout << "Max: " << max(a, max(b, c));
     

}