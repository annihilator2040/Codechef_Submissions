// https://www.codechef.com/problems/WATERCOOLER1

#include <stdio.h>
int main(){
    int t, i, x, y, m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&x,&y,&m);
        int h = x*m;
        if(h<y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    return 0;
}
