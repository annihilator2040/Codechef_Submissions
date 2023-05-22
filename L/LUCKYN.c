// https://www.codechef.com/problems/LUCKYN

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x;
    scanf("%d",&x);
    int h = 0;
    for(int i =1; x!=0; i++){
        int ld = x%10;
        x  = x /10;
        if(ld == 7){
            h++;
        }
    }
    if(h==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
