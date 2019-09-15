#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){
    int aux = 0;

    if (lis->esVacia()) return throw 404;

    for (int i = 0; i < lis->getTamanio(); ++i) {
        aux = lis->getDato(0);
        lis->insertar(lis->getTamanio() - i, aux);
        lis->remover(0);
    }
}

#endif //FNINVIERTE_H
