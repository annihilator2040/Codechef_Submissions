// https://www.codechef.com/problems/PASSORFAIL

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n,x,p;
    scanf("%d%d%d",&n,&x,&p);
    int k = (x*3)-(n-x);
    if(k>=p){
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
