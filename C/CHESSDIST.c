// https://www.codechef.com/problems/CHESSDIST

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a,b, c, d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int k = abs(a-c);
    int l = abs(b-d);
    if(k>=l){
        printf("%d\n",k);
    }
    else{
        printf("%d\n",l);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
