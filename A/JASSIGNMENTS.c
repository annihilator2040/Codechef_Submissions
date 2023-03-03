// https://www.codechef.com/problems/JASSIGNMENTS

#include <stdio.h>
int main(){
    int t, x;
    scanf("%d",&t);
    for(int i= 0; i<t; i++){
        scanf("%d",&x);
        int h = 10-x;
        if(h>=3){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
}
