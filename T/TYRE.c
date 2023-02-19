// https://www.codechef.com/problems/TYRE

#include <stdio.h>
int main(){
    int n, m, i = 0, t;
    scanf("%d",&t);
    while(i<t){
        scanf("%d%d",&n,&m);
        int h = ((2*n)+(4*m));
        printf("%d\n",h);
        i++;
    }
    return 0;
}
