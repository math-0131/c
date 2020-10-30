#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double raio;
    cout << "Insira o raio: ";
    cin >> raio;
    double circunferencia = 2 * 3.1415 * raio;
    printf("O perimetro da circunferencia é %f.", circunferencia);
    return 0;
}