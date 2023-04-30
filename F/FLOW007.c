// https://www.codechef.com/problems/FLOW007

#include <stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    while(t--){
        int n, sum = 0;
        scanf("%d",&n);
        while(n!=0){
            int ld = n%10;
            sum = sum * 10;
            sum = sum + ld;
            n = n/10;
        }
        printf("%d\n",sum);
    }
}
