// https://www.codechef.com/problems/CHEAPFOOD

#include <stdio.h>
int main(){
    int t, x;
    scanf("%d",&t);
    for(int i= 0;i<t;i++){
        scanf("%d",&x);
        int h = 0.1*x;
        int g =100;
        if(h>g){
            printf("%d\n",h);
        }
        else {
            printf("%d\n",g);
        }
    }
    return 0;
}
