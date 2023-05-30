// https://www.codechef.com/START91D/problems/PARKINGCHARG

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x, y, h;
    scanf("%d%d%d",&x,&y,&h);
    if(h<=1){
        printf("%d\n",x);
    }
    else{
        printf("%d\n",x+((h-1)*y));
    }
    return 0;
}
