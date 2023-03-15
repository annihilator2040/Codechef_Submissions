// https://www.codechef.com/problems/ACCURACY

#include <stdio.h>
int main(){
    int t, x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
	    if(x%3!=0){
	    printf("%d\n",3-(x%3));}
	    else{
	        printf("0\n");
	    }
    }
    return 0;
    
}
