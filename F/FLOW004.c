// https://www.codechef.com/problems/FLOW004

#include <stdio.h>
int main(){
    int ld, fd, sum , i, t, n; 
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        ld = n%10;
        while(n!=0){
            fd = n%10;
            n = n/10;
        }
        sum = fd + ld;
        printf("%d\n",sum);
    }
}
