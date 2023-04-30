// https://www.codechef.com/START82D/problems/CANDIVIDE

#include <stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int h = n%3;
        if(h!=0){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
