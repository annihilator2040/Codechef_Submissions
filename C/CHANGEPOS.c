//https://www.codechef.com/problems/CHANGEPOS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int sx, sy, ex, ey;
    scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
    if(sx!=ex && sy!=ey){
        printf("1\n");
    }
    else{
        printf("2\n");
    }
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
