#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;

    char word[100];
    Pila<char> cachengue;

    std::cout << "Introduzca una palabra (Máx.: 100): " << std::endl;
    std::cin >> word;

    for (int i = 0; word[i] != '\0' ; ++i) {
        cachengue.push(word[i]);
    }

    while (!cachengue.esVacia()){
        std::cout << cachengue.pop();
    }

    return 0;
}