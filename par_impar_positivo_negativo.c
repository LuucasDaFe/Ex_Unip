#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nIpar = 0;
    int nPar = 0;
    int nPos = 0;
    int  nNeg = 0;

    int n1, n2, n3, n4, n5;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if(n1%2 == 0){
        nPar = nPar + 1;
    }
    else{
        nIpar = nIpar + 1;
    }

    if(n2%2 == 0){
        nPar = nPar + 1;
    }
    else{
        nIpar = nIpar + 1;
    }

    if(n3%2 == 0){
        nPar =nPar + 1;
    }
    else{
        nIpar = nIpar + 1;
    }

    if(n4%2 == 0){
        nPar = nPar + 1;
    }
    else{
        nIpar = nIpar + 1;
    }

    if(n5%2 == 0){
        nPar = nPar + 1;
    }
    else{
        nIpar = nIpar + 1;
    }

    if(n1 < 0){
        nPos = nPos + 1;
    }
    else{
        nNeg = nNeg + 1;
    }

    if(n2 < 0){
        nPos = nPos + 1;
    }
    else{
       nNeg = nNeg + 1;
    }

    if(n3 < 0){
       nPos = nPos + 1;
    }
    else{
        nNeg = nNeg + 1;
    }

    if(n4 < 0){
        nPos + 1;
    }
    else{
        nNeg = nNeg + 1;
    }

    if(n5 < 0){
        nPos = nPos + 1;
    }
    else{
       nNeg = nNeg + 1;
    }

    printf("%d Valor Par\n", nPar);
    printf("%d Valor Par\n", nIpar);
    printf("%d Valor Par\n", nPos);
    printf("%d Valor Par\n", nNeg);

    return 0;
}
