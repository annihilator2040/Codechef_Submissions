// https://www.codechef.com/problems/WTRMIXING

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a, b, x, y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    if(a>=b){
        if(y>=a-b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        if(x>=b-a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
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
