#include <iostream>

using namespace std;

int num = 0;
int min = 0;
int seg = 0;
int hr = 0;

int main() {
    cout << "Ingrese un número de segundos (entero): ";
    cin << num;

    min = (num / 60);
    hr = min / 60;
    min = (hr * 60) - min;

    cout << "Ejercicio 00/04\n" << endl;
    return 0;
}