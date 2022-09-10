#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x=1;
    int  y=1;
    printf("\n qual o valor de x,y?");
    printf("\n:%d\ty%d",x,y);

    x=x+1;
    y++;
    printf("\n qual o valor de x,y?");
    printf("\n:%d\ty%d",x,y);

    x=x*6;
    y*=6;
    printf("\n qual o valor de x,y?");
    printf("\n:%d\ty%d",x,y);

    x=x/3;
    y/=3;
    printf("\n qual o valor de x,y?");
    printf("\n:%d\ty%d",x,y);

    x=x-1;
    y--;
    printf("\n qual o valor de x,y?");
    printf("\n:%d\ty%d",x,y);
    return 0;
}
