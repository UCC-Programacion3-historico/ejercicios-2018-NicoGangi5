#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if (b == 0){
        return 0;
    }
    if (b == 1){
        return a;
    }
    if (a >= b){
        a = a - b;
        return 1 + cociente(a, b);
    }
    return 0;
}


unsigned int resto(unsigned int a, unsigned int b) {
    if (cociente(a, b) == 0){
        return 0;
    }
    else{
        return a - (cociente(a, b) * b);
    }
}


void escribir_espaciado(unsigned int num) {
    if (num < 10){
        std::cout << num << " ";
    }
    else {
        escribir_espaciado(cociente(num, 10));
        num = resto(num, 10);
        if (num < 10){
            std::cout << num << " ";
        } else{
            escribir_espaciado(num);
        }
    }
    return;

}
