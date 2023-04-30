// https://www.codechef.com/problems/SST

#include <stdio.h>
int main(){
    int t, a, b;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d%d",&a,&b);
        int h  = (a*100)/10;
        int k = (b*100)/20;
        if(h==k){
            printf("ANY\n");
        }
        else if(h>k){
            printf("FIRST\n");
        }
        else{
            printf("SECOND\n");
        }
        
    }
    return 0;
    
}
