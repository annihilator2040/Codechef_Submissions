// https://www.codechef.com/problems/FLOW006

#include <stdio.h>
int main(){
    int n, t, i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int sum = 0;
        while(n!=0)
        {
            int ld = n%10;
            n = n/10;
            sum = sum +ld;
        }
        printf("%d\n",sum);
    }
    return 0;
}
