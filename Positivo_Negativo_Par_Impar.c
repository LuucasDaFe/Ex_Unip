#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos, neg, ip, par;
    int n1, n2, n3, n4, n5;

    pos = 0;
    neg = 0;
    ip = 0;
    par = 0;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if(n1%2 == 0){
        par=par + 1;
    }else{ip=ip + 1;}

    if(n2%2 == 0){
        par=par + 1;
    }else{ip=ip + 1;}

    if(n3%2 == 0){
        par=par + 1;
    }else{ip=ip + 1;}

    if(n4%2 == 0){
        par=par + 1;
    }else{ip=ip + 1;}

    if(n5%2 == 0){
        par=par + 1;
    }else{ip=ip + 1;}

    if(n1==0){
        neg=neg+0;
    }else if(n1>0){
        pos=pos+1;
    }else{neg=neg+1;}

    if(n2==0){
        neg=neg+0;
    }else if(n2>0){
        pos=pos+1;
    }else{neg=neg+1;}

    if(n3==0){
        neg=neg+0;
    }else if(n3>0){
        pos=pos+1;
    }else{neg=neg+1;}

    if(n4==0){
        neg=neg+0;
    }else if(n4>0){
        pos=pos+1;
    }else{neg=neg+1;}

    if(n5==0){
        neg=neg+0;
    }else if(n5>0){
        pos=pos+1;
    }else{neg=neg+1;}

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", ip);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);


    return 0;
}
