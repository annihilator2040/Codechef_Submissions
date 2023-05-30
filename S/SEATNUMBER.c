// https://www.codechef.com/START91D/problems/SEATNUMBER

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x<=10){
        printf("Lower Double\n");
    }
    else if(x>10 && x<=15){
        printf("Lower Single\n");
    }
    else if(x>15 && x<=25){
        printf("Upper Double\n");
    }
    else{
        printf("Upper Single\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
