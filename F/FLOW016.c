// https://www.codechef.com/problems/FLOW016

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a, b, small =0, gcd, j=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        small=b;
    }
    else{
        small=a;
    }
    for(j=1;j<=small;j++){
        if(a%j==0 && b%j==0){
            gcd = j;
        }
    }
    long int lcm = (long int)a*b/gcd;
    printf("%d %li\n",gcd,lcm);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
