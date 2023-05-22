// https://www.codechef.com/problems/PRIMEDICE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int a, b, count =0;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    for(int i =2;i<sum;i++){
        if(sum%i==0){
            count = 1;
            break;
        }
    }
    if(count==1){
        printf("Bob\n");
    }
    else{
        printf("Alice\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
