// https://www.codechef.com/problems/DONDRIVE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, x;
    scanf("%d%d",&n,&x);
    printf("%d\n",n-x);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
