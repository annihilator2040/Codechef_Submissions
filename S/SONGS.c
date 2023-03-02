// https://www.codechef.com/problems/SONGS

#include <stdio.h>
int main(){
    int t, n, x;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d%d",&n, &x);
        int h = n/(3*x);
        printf("%d\n",h);
    }
    return 0;
}
