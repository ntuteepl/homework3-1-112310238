#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,d1,s2,d2,s3,d3,car,temp;
    int s[3];
    int d[3];
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    s[0]=s1;
    s[1]=s2;
    s[2]=s3;
    d[0]=d1;
    d[1]=d2;
    d[2]=d3;
/*---------------排序--------------------------------*/
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
         if(s[i]>s[j])
         {
          temp=s[j];
          s[j]=s[i];
          s[i]=temp;
          temp=d[j];
          d[j]=d[i];
          d[i]=temp;
         }
        }
    }
/*---------------班次--------------------------------*/
    car=1;
    if(s[1]<d[0])
    {
        car+=1;
    }
    if(s[2]<d[1])
     {
         car+=1;
     }
    if(s[2]>=d[0] && s[1]<d[0])
    {
        car-=1;
    }
    printf("%d",car);
    }







