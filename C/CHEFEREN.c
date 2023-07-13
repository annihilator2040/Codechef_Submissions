// https://www.codechef.com/problems/CHEFEREN

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, a, b;
    scanf("%d%d%d",&n,&a,&b);
    int total = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            total = total+a;
        }
        else{
            total = total+b;
        }
    }
    printf("%d\n",total);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
