// https://www.codechef.com/problems/TRUESCORE

#include <stdio.h>
int main(){
    int t, a, b, c, d;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        scanf("%d%d",&c,&d);
        if(a<=c && b<=d){
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
