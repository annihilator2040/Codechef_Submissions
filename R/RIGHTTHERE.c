// https://www.codechef.com/problems/RIGHTTHERE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, x;
    scanf("%d%d",&n,&x);
    if(n<=x){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
