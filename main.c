#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// o que eu quero fazer - quero fazer uma calculadora que faça (quase) todo tipo de cálculo que existe na matemática

int main()
{
    // declaração das variáveis
    int num1, num2;

    // scan das variáveis
    scanf("%d", &num1);
    scanf("%d", &num2);

    // funções linkadas
    soma(num1, num2);
    sub(num1, num2);
    mult(num1, num2);
    div(num1, num2);


    getchar();
    return 0;
}
