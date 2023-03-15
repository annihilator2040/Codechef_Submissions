// https://www.codechef.com/problems/TODOLIST

#include <stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++){
            if(arr[j]>=1000){
                count++;
            } 
        }
        printf("%d\n",count);
    }
    return 0;
}
