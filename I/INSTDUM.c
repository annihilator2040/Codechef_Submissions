// https://www.codechef.com/START85D/problems/INSTDUM

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, k=0, sum = 0;
    float s;
    scanf("%d",&n);
    int a[n];
    for(int i = 1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n;i++){
        sum = sum + a[i];
        s = ((float)sum/i)*(float)100;
        if(s==100){
            k++;
        }
    }
    if(k>0){
        printf("%d\n",k);
    }
    else{
        printf("0\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
