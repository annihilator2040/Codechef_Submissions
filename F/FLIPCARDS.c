// https://www.codechef.com/problems/FLIPCARDS

#include <stdio.h>
int main(){
    int t, n, x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
        int h = n-x;
        if(x>h){
            printf("%d\n",h);
        }
        else{
            printf("%d\n",x);
        }
    }
    return 0;
}
