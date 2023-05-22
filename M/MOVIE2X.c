// https://www.codechef.com/problems/MOVIE2X

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y, z;
    scanf("%d%d",&x,&y);
    z = x-y;
    int total = z + y/2;
    printf("%d\n",total);
}

int main()
{
    batman(); 
    return 0;
}
