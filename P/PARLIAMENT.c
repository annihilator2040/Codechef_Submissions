// https://www.codechef.com/START89D/problems/PARLIAMENT

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    float n, x ;
    scanf("%f%f",&n,&x);
    if(x>=(n/2)){
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
