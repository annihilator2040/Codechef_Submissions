// https://www.codechef.com/problems/FINDSHOES

#include <stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    while(t--){
        int m;
        scanf("%d%d",&n,&m);
        if(n<=m){
            printf("%d\n",n);
        } 
        else if(m==0){
            printf("%d\n",n*2);
        }
        else{
            printf("%d\n",m+(n-m)*2);
        }
    }
    return 0;
}
