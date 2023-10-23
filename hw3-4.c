#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans,g,a=0,b=0;
    int A[4]={0,0,0,0};
    int G[4]={};
    scanf("%1d%1d%1d%1d",&A[0],&A[1],&A[2],&A[3]);
    while(1)
    {
    scanf("%d",&g);
    G[0]=g/1000;
    G[1]=(g%1000)/100;
    G[2]=(g%100)/10;
    G[3]=(g%10);
    if(g==0)
    {
        break;
    }
    for (int i=0;i<4;i++)
    {

        for(int j=0;j<4;j++)
        {
         if(A[i]==G[j])
         {
          if(i==j)
          {
           a+=1;
           break;
          }
          else
          {
           b+=1;
           break;
          }

         }


        }

    }
    printf("%dA%dB\n",a,b);
    a=0;
    b=0;


    }
}
