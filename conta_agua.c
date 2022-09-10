#include <stdio.h>

int main()
{
    int N,franquia,consumo,consumo2,consumo3,X,conta;
    franquia=7;
    consumo=0;
    scanf("%d",&N);

    if(N<=10){
        printf("%d",franquia);
    }else if((N>=11)&&(N<=30)){
        consumo=N-10;
        conta=consumo+franquia;
        printf("%d\n",conta);
    }else if((N>=31)&&(N<=100)){
        consumo2=N-30;
        X=consumo2-franquia;
        consumo=N-X-10;
        conta=consumo2*2+consumo;
        printf("%d\n",conta);
    }else if(N>=101){
        consumo3=N-100;
        consumo2=N-30-consumo3;
        consumo=N-10-consumo3-consumo2;
        conta=consumo+consumo2*2+consumo3*5+franquia;
        printf("%d\n",conta);
    }

    return 0;
}
