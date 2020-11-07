#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    bool sunny = false;
    string result = sunny ? ":)" : ":(";
    cout << result << endl;

    double balance = 1234.56;
    double value;
    cout << "Insira o valor: ";
    cin >> value;

    char creditOrDebit;
    cout << "Credit (c) or debit (d): ";
    cin >> creditOrDebit;

    cout << "Balance [Before]: " << balance << endl;

    balance += creditOrDebit == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl;


    return 0;
}
