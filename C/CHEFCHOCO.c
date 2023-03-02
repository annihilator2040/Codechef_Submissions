// https://www.codechef.com/problems/CHEFCHOCO

#include <stdio.h>
int main(){
    int t, c, x, y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&c,&x,&y);
        int h = (c-x)*y;
        printf("%d\n",h);
    }
    return 0;
}
