#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// o que eu quero fazer - quero fazer uma calculadora que fa�a (quase) todo tipo de c�lculo que existe na matem�tica

int main()
{
    // declara��o das vari�veis
    int num1, num2;

    // scan das vari�veis
    scanf("%d", &num1);
    scanf("%d", &num2);

    // fun��es linkadas
    soma(num1, num2);
    sub(num1, num2);
    mult(num1, num2);
    div(num1, num2);


    getchar();
    return 0;
}
