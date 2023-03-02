// https://www.codechef.com/problems/AVGPROBLEM

#include <stdio.h>
int main(){
    int t, a, b, c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&c);
        float avg = ((float)a+(float)b)/2;
        if(avg>c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
