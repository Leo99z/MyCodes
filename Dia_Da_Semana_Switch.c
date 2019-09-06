#include <stdio.h>
#incluse <stdlib.h>

int main() {
    int numero;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);
    
    switch(numero){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terca\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("OPERACAO INVALIDA!!");
            break;
            
        
        
        
    }
    return 0;
}
