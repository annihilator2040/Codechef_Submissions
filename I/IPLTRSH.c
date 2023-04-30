// https://www.codechef.com/START85D/problems/IPLTRSH

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, m;
    scanf("%d%d",&n,&m); 
    if(n>m){
       printf("%d\n",n-m);
    }
    else{
       printf("0\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
