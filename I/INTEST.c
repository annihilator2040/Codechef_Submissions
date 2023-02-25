// https://www.codechef.com/problems/INTEST

#include <stdio.h>
int main(){
    int n, i, k, count = 0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t%k==0){
            count++;
        }
        
    }
    printf("%d",count);
    return 0 ;
}
