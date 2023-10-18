#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int x1=(x/1000) + ((x%1000)/100) + ((x%100)/10) + (x%10);
    int y1=(y/1000) + ((y%1000)/100) + ((y%100)/10) + (y%10);
    if(x1==y1)
    {
        if(x<y)
        {
            printf("%d",x);
        }

        else {printf("%d",y);}
    }
    else if (x1<y1)
    {
        printf("%d",x);
    }

    else if(y1<x1) {printf("%d",y);}




}


