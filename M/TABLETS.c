// https://www.codechef.com/problems/TABLETS

#include <stdio.h>
int main(){
    int x, y, h, i, t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        h = 3*x;
        if(h<=y){
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
