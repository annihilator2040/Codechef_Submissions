// https://www.codechef.com/problems/NEGPROD

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a*b<0 || a*c<0 || b*c<0){
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
