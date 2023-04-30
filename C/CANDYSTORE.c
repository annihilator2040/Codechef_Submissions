// https://www.codechef.com/problems/CANDYSTORE

#include <stdio.h>
int main(){
    int x, y, i, t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        if(x==y){
            printf("%d\n",x);
        }
        else if(y>x){
            int h = x + 2*(y-x);
            printf("%d\n",h);
        }
        else {
            printf("%d\n",y);
        }
    }
    return 0;
}
