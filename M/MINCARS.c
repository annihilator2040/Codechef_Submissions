// https://www.codechef.com/problems/MINCARS#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    if(n>4){
        int k = n/4;
        float h = (float)n/4;
        if(h>k){
            printf("%d\n",k+1);
        }
        else{
            printf("%d\n",k);
        }
    }
    else{
        printf("1\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}

