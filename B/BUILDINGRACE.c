// https://www.codechef.com/problems/BUILDINGRACE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    float a,b,x,y;
    scanf("%f%f%f%f",&a,&b,&x,&y);
    float t1 = a/x;
    float t2 = b/y;
    if(t2>t1){
        printf("Chef\n");
    }
    else if(t1>t2){
        printf("Chefina\n");
    }
    else{
        printf("Both\n");
    }
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
