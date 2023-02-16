// https://www.codechef.com/problems/PROINC

#include <stdio.h>
int main()
{
    int i, t, x , y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        int h = 0.1*x;
        y = y + h;
        printf("%d\n",y);
    }
    return 0;
}
