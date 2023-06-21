// https://www.codechef.com/problems/FILLCANDIES

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n, k, m;
    scanf("%d%d%d",&n,&k,&m);
    int capa = m*k;
    float t = (float)n/(float)capa; 
    int total = n / capa;
    if(t>total)
    printf("%d\n",total+1);
    else{
        printf("%d\n",total);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
