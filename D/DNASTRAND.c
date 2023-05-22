// https://www.codechef.com/problems/DNASTRAND

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    for(int i =0;i<n;i++){
        if(a[i]=='A'){
            a[i] = 'T';
        }
        else if(a[i]=='T'){
            a[i] = 'A';
        }
        else if(a[i]=='G'){
            a[i] = 'C';
        }
        else{
            a[i] = 'G';
        }
    }
    printf("%s\n",a);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
