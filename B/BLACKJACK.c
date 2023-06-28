// https://www.codechef.com/problems/BLACKJACK

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int temp = 21 - (a+b);
    if(temp>10){
        printf("-1\n");
    }
    else{
        printf("%d\n",temp);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
