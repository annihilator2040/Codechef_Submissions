// https://www.codechef.com/problems/CHEFAPPS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int s, w, x, y, z;
    scanf("%d%d%d%d",&s,&x,&y,&z);
    int apps  = x+y;
    int left  = s - apps;
    if(x+y+z<=s){
        printf("0\n");
    }
    else if(left<z){
        w = z-left;
        if(w<=x || w<=y){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
