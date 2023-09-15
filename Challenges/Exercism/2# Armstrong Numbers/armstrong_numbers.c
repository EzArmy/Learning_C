#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int num) {
    int digitos[10];
    int contadorDeLoop = 0;
    int inputedNum = num;

    while (num > 0) {
        int digit = num % 10;
        num = num / 10;
        digitos[contadorDeLoop] = digit;
        contadorDeLoop++;
    }

    int somaElevados = 0;

    for (int i = 0; i < contadorDeLoop; i++) {
        int potencia = pow(digitos[i], contadorDeLoop);
        somaElevados += potencia;
    }

    return somaElevados == inputedNum;
}
