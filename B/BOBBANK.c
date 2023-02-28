//  https://www.codechef.com/problems/BOBBANK

#include <stdio.h>
int main(){
    int w, x, y, z, t, i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int total = w + (x-y)*z;
    printf("%d\n",total);
    }
    return 0;
}
