// https://www.codechef.com/problems/C_RATING

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x, y;
    scanf("%d%d",&x,&y);
    if(x>=y){
        printf("0\n");
    }
    else{
        for(int j = 1;x!=0;j++){
            if(x+(j*8) >= y){
                printf("%d\n",j);
                break;
            }
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
