// https://www.codechef.com/problems/XJUMP

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int k = x/y;
    if(x%y==0){
        printf("%d\n",k);
    }
    else{
        printf("%d\n",k+(x%y));
    }
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
