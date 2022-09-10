#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int num =rand()%5 +1;
    int chute;

    scanf("%d", &chute);

    if(chute == num){
        printf("\nParabens... acertou o numero sorteado");
    }
    else{
    printf("\nErrou o numero sorteado foi %d", num);
    }

    return 0;
}
