// https://www.codechef.com/problems/SUGARCANE

#include <stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int total = 50*n;
        int expence = (0.2*total)+(0.2*total)+(0.3*total);
        printf("%d\n",total-expence);
    }
    return 0;
}
