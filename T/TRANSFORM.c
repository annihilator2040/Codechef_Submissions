// https://www.codechef.com/problems/TRANSFORM

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    switch(n%3){
        case 0:{
            printf("NORMAL\n");
            break;
        }
        case 1:{
            printf("HUGE\n");
            break;
        }
        case 2:{
            printf("SMALL\n");
            break;
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
