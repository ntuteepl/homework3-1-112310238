#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,d1,s2,d2,s3,d3,car;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    car=1;
    if(s2<d1)
    {
        car+=1;
    }
    if(s3<d2)
     {
         car+=1;
     }
    if(s3>=d1 )
    {
        car-=1;
    }
    printf("%d",car);
    
