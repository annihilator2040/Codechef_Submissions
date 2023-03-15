// https://www.codechef.com/problems/GDTURN

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        int h  = x+y;
        if(h>6){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
