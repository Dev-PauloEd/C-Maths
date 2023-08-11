#include <stdio.h>
#include <stdlib.h>


// o que eu quero fazer - quero fazer uma calculadora que faça alguns tipos de cálculo que existe na matemática

void selecaoDeOperacao();
void basicsFour();
void mediaAritmetica();

int main()
{
    printf("Ola! Bem vindo a super calculadora!");

    selecaoDeOperacao();

    return 0;
}

void selecaoDeOperacao(){
    int selecao;

    printf("\n\nEscolha a operacao a fazer:\n");
    printf("***********************************");
    printf("\n.0 - as quatro operacoes;\n.1 - media aritmetica;\n.2 - media ponderada;\n.3 - moda;\n.4 - mediana;\n.5 - amplitude;\n");
    printf(".6 - variancia;\n.7 - desvio padrao;\n.8 - permutacao simples;\n.9 - permutacao com repeticao;\n.10 - conbinacao simples\n");

    scanf("%d", &selecao);

    switch (selecao) {
    case 0:
         basicsFour();
        break;
    case 1:
        mediaAritmetica();
        break;
    case 2:
//        mediaPonderada();
        break;
    case 3:
//        moda();
        break;
    case 4:
//        mediana();
        break;
    case 5:
//        amplitude();
        break;
    case 6:
//        variancia();
        break;
    case 7:
//        desvioPadrao();
        break;
    case 8:
//        permutacaoSimples();
        break;
    case 9:
//        permutacaoComRepeticao();
        break;
    case 10:
//        combinacaoSimples();
        break;
    default:
        printf("\n\nDeixe de ser um pamonha! Escolha certo!\n\n");
        selecaoDeOperacao();
        break;
    }
}

void basicsFour(){

    float num1, num2;
    int select;

    printf("\nAs quatro operacoes\n");
    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("\nDigite mais um numero: ");
    scanf("%f", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    float divisao = num1 / num2;

    printf("\nResultado da soma: %d", soma);
    printf("\nResultado da subtracao: %d", subtracao);
    printf("\nResultado da multiplicacao: %d", multiplicacao);
    printf("\nResultado da divisao: %.1f", divisao);



    printf("\nDeseja voltar, fazer mais uma operacao ou sair?\n.0 - voltar     ||     .1 - fazer mais uma operacao     ||     .Qualquer outro botao - sair\n");
    scanf("%d", &select);
    if (select == 0){
        return selecaoDeOperacao();
    } else if (select == 1) {
        return basicsFour();
    }
}

void mediaAritmetica(){
    float num1, num2;
    int select;

    printf("\nMedia Aritmetica\n");
    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("\nDigite mais um numero: ");
    scanf("%f", &num2);

    float media = (num1 + num2) / 2;
    printf("\nO resultado da media entre %.1f e %.1f e: %.2f", num1, num2, media);

    printf("\nDeseja voltar, fazer mais uma operacao ou sair?\n.0 - voltar     ||     .1 - fazer mais uma operacao     ||     .Qualquer outro botao - sair\n");
    scanf("%d", &select);
    if (select == 0){
        return selecaoDeOperacao();
    } else if (select == 1) {
        return basicsFour();
    }
}
