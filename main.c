#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declarando variaveis*/
    int n1, n2, result;
    char sinal;

    /*Entrada de dados*/
    printf("Digite dois valores: \n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    printf("Digite +,-,*,/:\n");
    scanf(" %c", &sinal);

    switch(sinal){
    case '+':
        result = n1 + n2;
        printf("O resultado eh: %i\n", result);
        break;
    case '-':
        result = n1 - n2;
        printf("O resultado eh: %i\n", result);
        break;
    case '*':
        result = n1 * n2;
        printf("O resultado eh: %i\n", result);
        break;
    case '/':
        result = n1 / n2;
        printf("O resultado eh: %i\n", result);
        break;
    default:
        printf("OPERACAO INVALIDA");
        }
    return 0;
}
