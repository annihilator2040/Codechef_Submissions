// https://www.codechef.com/problems/TESTAVG

#include <stdio.h>
int main(){
    int t, a, b, c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(((a+b)/2) <35 || ((a+c)/2) <35 || ((c+b)/2) < 35){
            printf("FAIL\n");
        }
        else{
            printf("PASS\n");
        }
        
    }
    return 0;
    
}
