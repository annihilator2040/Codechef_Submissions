// https://www.codechef.com/problems/POLTHIEF

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y, z;
    scanf("%d%d",&x,&y);
    if(x>y){
        z = (x-y)/1;
    }
    else{
        z = (y-x)/1;
    }
    printf("%d\n",z);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
