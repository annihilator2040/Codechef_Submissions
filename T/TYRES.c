// https://www.codechef.com/problems/TYRES

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    if(n<4){
        printf("YES\n");
    }
    else if(n%4!=0){
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
