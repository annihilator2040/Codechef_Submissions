// https://www.codechef.com/problems/JCOINS

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        int h = (x*10)+(y*5);    
        printf("%d\n",h);
    }
    return 0;
}
