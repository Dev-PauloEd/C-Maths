#include <stdio.h>
#include "functions.h"


int soma(int a, int b){
    int sum = a+ b;
    printf("%d\n", sum);
    return sum;
}

int sub(int a, int b){
    int ssub = a - b;
    printf("%d\n", ssub);
    return ssub;
}

int mult(int a, int b){
    int multi = a * b;
    printf("%d\n", multi);
    return multi;
}

float div(float a, float b){
    int divi = a / b;
    printf("%d\n", divi);
    return divi;
}
