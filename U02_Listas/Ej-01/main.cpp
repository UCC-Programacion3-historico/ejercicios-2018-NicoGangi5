#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;

    Lista<int> *lista;
    lista = new Lista<int>();
    for(int i = 15; i < 25; i++){
        lista->insertarUltimo(i);
    }
    for (int i = 0; i < lista->getTamanio(); i++) {
        std::cout << " " << lista->getDato(i);
    }
    std::cout << std::endl;

    fnInvierte(lista);
    for (int i = 0; i < lista->getTamanio(); i++) {
        std::cout << " " << lista->getDato(i);
    }
    std::cout << std::endl;
    return 0;
}