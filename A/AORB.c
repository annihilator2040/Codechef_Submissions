// https://www.codechef.com/problems/AORB

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int j = 500-(x*2);
    int k = 1000-((x+y)*4);
    int l = 500-((x+y)*2);
    int m = 1000-(y*4);
    if((j+k)>=(l+m)){
        printf("%d\n",j+k);
    }
    else{
        printf("%d\n",l+m);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
