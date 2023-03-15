// https://www.codechef.com/problems/ACTEMP

#include <stdio.h>
int main(){
    int t, a, b, c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if(a<=b && b>=c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
