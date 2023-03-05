// https://www.codechef.com/problems/AMR15A

#include <stdio.h>
int main(){
    int n,k=0, h=0;
    int a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            k++;
        }
        else {
            h++;
        }
    }
    if(k>h){
        printf("READY FOR BATTLE\n");
    }
    else{
        printf("NOT READY\n");
    }
    
}
