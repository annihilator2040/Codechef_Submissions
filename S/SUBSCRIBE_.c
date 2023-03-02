// https://www.codechef.com/problems/SUBSCRIBE_

#include <stdio.h>
int main(){
    int t, n, x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&x);
        if(n>6){
            int h= n/6;
            float g = (float)n/6;
            if(g>h){
                ++h;
                printf("%d\n",h*x);
            }
            else{
                printf("%d\n",h*x);
            }
        }
        else{
            printf("%d\n",x);
        }
    }
}
