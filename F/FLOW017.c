// https://www.codechef.com/problems/FLOW017

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b && a<c) || (a>c && a<b)){
        printf("%d\n",a);
    }
    else if((b>a && b<c) || (b>c && b<a)){
        printf("%d\n",b);
    }
    else{
        printf("%d\n",c);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
