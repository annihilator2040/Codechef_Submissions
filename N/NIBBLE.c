// https://www.codechef.com/problems/NIBBLE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    if((n%4)==0){
        printf("Good\n");
    }
    else{
        printf("Not Good\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
