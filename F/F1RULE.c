// https://www.codechef.com/problems/F1RULE

#include <stdio.h>
int main(){
    int t;
    float x, y;
    scanf("%d",&t);
    for(int i = 0;i<t;i++){
        scanf("%f%f",&x,&y);
        float h = 1.07*x;
        if(y<=h){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
