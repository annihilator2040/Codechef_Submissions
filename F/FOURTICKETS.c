// https://www.codechef.com/problems/FOURTICKETS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x*4<=1000){
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
