//URI JUDGE 2787 C soluction
#include <stdio.h>

int main() {

    int L = 0, C = 0;
    scanf("%i", &L);
    scanf("%i", &C);
    if(L%2 == C%2){
        printf("1\n");
        }
        else{
            printf("0\n");
    }
    return 0;
}
