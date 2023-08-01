// https://www.codechef.com/problems/WORDLE

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    char s[5], t[5];
    scanf("%s", s);
    scanf("%s", t);
    for(int i=0;i<5;i++){
        if(s[i]==t[i]){
            printf("G");
        }
        else{
            printf("B");
        }
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
