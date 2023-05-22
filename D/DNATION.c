// https://www.codechef.com/problems/DNATION

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int diff = y-x;
    printf("%d\n",diff);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
