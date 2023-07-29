// https://www.codechef.com/problems/SPEEDTEST

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    float a,b,x,y;
    scanf("%f%f%f%f",&a,&b,&x,&y);
    float k = a/x;
    float j = b/y;
    if(k>j){
        printf("ALICE\n");
    }
    else if(j>k){
        printf("BOB\n");
    }
    else{
        printf("EQUAL\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
