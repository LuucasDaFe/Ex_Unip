#include <stdio.h>

int main()
{
    int X,Y;
    X=0;
    Y=0;
    scanf("%d %d",&X,&Y);

    if((X>=-500)&&(X<=500)&&(Y>=-500)&&(Y<=500)){
        if((X<-1)||(Y<-1)||(X>500)||(Y>500)){
            printf("fora\n");
        }else{
            printf("dentro\n");
        }
    }

    return 0;
}
