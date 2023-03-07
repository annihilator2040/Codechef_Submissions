// https://www.codechef.com/problems/TRAVELFAST

#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            printf("CAR\n");
        }
        else if(y>x){
            printf("BIKE\n");
        }
        else{
            printf("SAME\n");
        }
    }
    return 0;
}
