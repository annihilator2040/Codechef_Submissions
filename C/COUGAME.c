// https://www.codechef.com/problems/COUGAME

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int g, b;
    scanf("%d%d",&g,&b);
    printf("%d\n",b-g);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
