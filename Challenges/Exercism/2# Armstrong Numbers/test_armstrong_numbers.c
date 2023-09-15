#include <stdio.h>
#include "armstrong_numbers.h"

int main() {
    // Teste de is_armstrong_number
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    if (is_armstrong_number(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
