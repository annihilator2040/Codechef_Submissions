// codechef.com/problems/TENPACKETS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int h = x*5;
    int k = y*2 + x;
    if(h<k){
        printf("%d\n",h);
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
