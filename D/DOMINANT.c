// https://www.codechef.com/problems/DOMINANT

#include <stdio.h>
int main(){
    int t, na, nb, nc;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&na,&nb,&nc);
        if(na+nb<nc || na+nc<nb || nb+nc<na ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
