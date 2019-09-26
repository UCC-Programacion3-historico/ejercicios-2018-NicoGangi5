#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    Cola<char> Queue;
    Pila<char> Stack;

    char word[100];
    int state = 0;

    std::cout << "Ingrese su cadena: " << std::endl;
    std::cin >> word;

    for (int i = 0; word[i] != '\0' ; ++i) {
        if(word[i] != ' '){
            Queue.encolar(word[i]);
            Stack.push(word[i]);
        }
    }

    for (int j = 0; word[j] != '\0'; ++j) {
        while ( !Queue.esVacia() && !Stack.esVacia() ){
            if ( Queue.desencolar() == Stack.pop() )    state = 1;
            else state = 0;
        }
    }

    if (state == 1) std::cout << "La cadena es palidroma"<< std::endl;
    else std::cout << "La cadena NO es palidroma"<< std::endl;

    return 0;
}