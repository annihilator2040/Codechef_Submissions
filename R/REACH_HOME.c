// https://www.codechef.com/START82D/problems/REACH_HOME

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        if((5*x)>=y){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
