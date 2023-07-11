// https://www.codechef.com/problems/MYSERVE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int p, q;
    scanf("%d%d",&p,&q);
    int x = p+q;
    if(x==0){
        printf("ALICE\n");
    }
    else{
        if(x%4==0 || x%4==1){
            printf("ALICE\n");
        }
        else{
            printf("BOB\n");
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
