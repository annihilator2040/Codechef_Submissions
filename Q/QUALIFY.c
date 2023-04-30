// https://www.codechef.com/problems/QUALIFY

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, a, b;
    scanf("%d%d%d",&x,&a,&b);
    int h = a + b*2;
    if(h>=x){
        printf("Qualify\n");
    }
    else{
        printf("NotQualify\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
