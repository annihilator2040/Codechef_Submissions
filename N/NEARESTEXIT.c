// https://www.codechef.com/problems/NEARESTEXIT

#include <stdio.h>
int main(){
    int t, x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x<=50){
            printf("LEFT\n");
        }
        else{
            printf("RIGHT\n");
        }
    }
}
