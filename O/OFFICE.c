// https://www.codechef.com/problems/OFFICE

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        printf("%d\n",(x*4)+y);
    }
}
