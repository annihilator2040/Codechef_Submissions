// https://www.codechef.com/problems/POLYBAGS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    int k = n/10;
    float j = (float)n/10;
    if(j>k){
        printf("%d\n",k+1);
    }
    else{
        printf("%d\n",k);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
