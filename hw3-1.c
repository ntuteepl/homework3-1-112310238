#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int x=2;x<=n;x++)
    {
        if(x==n)
            {
            printf("YES\n");
            break;
            }
        if((n%x)==0)
        {
            printf("NO\n");
            break;
            }

        }


    }




