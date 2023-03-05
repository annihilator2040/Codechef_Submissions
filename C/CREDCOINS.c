// https://www.codechef.com/problems/CREDCOINS

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        int h = (x*y)/100;
        printf("%d\n",h);
    }
}
