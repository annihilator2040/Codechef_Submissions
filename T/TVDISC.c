// https://www.codechef.com/problems/TVDISC

#include <stdio.h>
int main(){
    int a, b, c, d, i, t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int h = a - c;
        int g = b - d;
        if(h<g){
            printf("First\n");
        }
        else if (h>g){
            printf("Second\n"); 
        }
        else
        {
            printf("Any\n");
        }
    }
    return 0;
    
}

