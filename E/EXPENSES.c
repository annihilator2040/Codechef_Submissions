// https://www.codechef.com/problems/EXPENSES

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, x,k;
    scanf("%d%d",&n,&x);
    k = pow(2,x);
    for(int i=1;i<=n;i++){
        k = 0.5*k;
    }
    printf("%d\n",k);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
