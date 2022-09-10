#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T,a,b,c,d,e,certo;

    certo=0;

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    if((T >= 1) && (T <= 4)){
        if(a == T){
            certo=certo+1;
        }
        if(b == T){
            certo=certo+1;
        }
        if(c == T){
            certo=certo+1;
        }
        if(d == T){
            certo=certo+1;
        }
        if(e == T){
            certo=certo+1;
        }
    }

    printf("%d", certo);


    return 0;
}
