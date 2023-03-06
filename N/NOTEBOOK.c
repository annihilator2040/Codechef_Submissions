// https://www.codechef.com/problems/NOTEBOOK

#include <stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int h = (n*1000)/100;
        printf("%d\n",h);
    }
    return 0;
}
