// https://www.codechef.com/problems/WGHTS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int w, x, y, z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x || w==y || w==z){
        printf("YES\n");
    }
    else if(w == (x+y+z)){
        printf("YES\n");
    }
    else if(w == (x+y) || w==(x+z) || w==(y+z)){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
