//https://www.codechef.com/problems/CREDITS

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    if(x>65){
        printf("Overload\n");
    }
    else if(x>=35 && x<=65){
        printf("Normal\n");
    }
    else {
        printf("Underload\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
