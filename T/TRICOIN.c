// https://www.codechef.com/problems/TRICOIN

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, count = 0;
    scanf("%d",&n);
    for(int i=1;i>0;i++){
        n-=i;
        if(n<0){
            break;
        }
        count++;
    }
    printf("%d\n",count);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
