// https://www.codechef.com/problems/CHEFBOTTLE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, x, k;
    scanf("%d%d%d",&n,&x,&k);
    if(k/x > n){
        printf("%d\n",n);
    }
    else{
        printf("%d\n",k/x);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
