// https://www.codechef.com/problems/CHEFCAND

#include <stdio.h>
int main(){
    int t, n, x;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d%d",&n,&x);
        if(n>x){
            int h = (n-x)/4;
            float k = ((float)n-(float)x)/4;
            if(k>h){
                h++;
                printf("%d\n",h);
            }
            else{
                printf("%d\n",h);
            }
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
