// https://www.codechef.com/problems/BATH

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int h = x/(2*y);
    printf("%d\n",h);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
