// https://www.codechef.com/problems/MAXTASTE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a , b, c, d,taste1=0, taste2=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+c>a+d){
        taste1 = a+c;
    }
    else{
        taste1 = a+d;
    }
    if(b+c>b+d){
        taste2 = b+c;
    }
    else{
        taste2 = b+d;
    }
    if(taste1>taste2){
        printf("%d\n",taste1);
    }
    else{
        printf("%d\n",taste2);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
