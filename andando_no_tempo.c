#include <stdio.h>

int main()
{
    int A,B,C,viagem;

    viagem=0;

    scanf("%d %d %d",&A,&B,&C);

    if((A>=1) && (A<=1000)&&(B>=1)&&(B<=1000)&&(C>=1)&&(C<=1000)){
        if((A-B)==viagem){
        printf("S\n");
        }else if((A-C)==viagem){printf("S\n");}
        else if((A+B-C)==viagem){printf("S\n");}
        else if((A-B+C)==viagem){printf("S\n");}
        else if((B-C)==viagem){printf("S\n");}
        else if((A-B-C)==viagem){printf("S\n");}
        else{printf("N\n");}
    }

    return 0;
}
