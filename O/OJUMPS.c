// https://www.codechef.com/problems/OJUMPS

#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    long int a;
    scanf("%ld",&a);
    if(a%3==0 || (a-1)%6==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
