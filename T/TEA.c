// https://www.codechef.com/problems/TEA

#include <stdio.h>
int main(){
    int x, y, z, t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&x,&y,&z);
        if(x<=y){
            printf("%d\n",z);
        }
        else if(x>y){
            float h = ((float)x/(float)y);
            int k = x/y;
            if(h>k){
                printf("%d\n",(k+1)*z);
            }
            else{
                printf("%d\n",k*z);
            }
        }
        
    }
    return 0;
}
