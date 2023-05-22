// https://www.codechef.com/problems/LEARNSQL

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int r, c, e;
    scanf("%d%d%d",&r,&c,&e);
    int cells = (r+e)*c;
    printf("%d\n",cells);
    return 0;
}
