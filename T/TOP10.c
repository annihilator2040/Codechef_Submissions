// https://www.codechef.com/problems/TOP10

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x<=10){
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
