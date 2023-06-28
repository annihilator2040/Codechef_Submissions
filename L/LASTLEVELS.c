// https://www.codechef.com/problems/LASTLEVELS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    int h=0,k;
    if(x%3!=0){
        h = (x/3) *z;
        k = x*y +h;
        printf("%d\n",k);
    }
    else{
        h = (x/3-1) *z;
        k = x*y +h;
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
