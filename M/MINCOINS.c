// https://www.codechef.com/problems/MINCOINS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x%10==0){
        printf("%d\n",x/10);
    }else if(x%5==0){
        printf("%d\n",(x/5)-(x/10));
    }else{
        printf("-1\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
