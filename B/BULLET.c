//https://www.codechef.com/problems/BULLET

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    int time  =(y/x);
    if(z<time){
        printf("0\n");
    }
    else{
        printf("%d\n",z-time);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
