// https://www.codechef.com/problems/DOREWARD

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x<=3){
        printf("BRONZE\n");
    }
    else if(x>3 && x<=6){
        printf("SILVER\n");
    }
    else{
        printf("GOLD\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
