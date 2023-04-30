// https://www.codechef.com/problems/RANKLISTPAGE

#include <stdio.h>

int main(void) {
	int t, x;
	scanf("%d",&t);
	for(int i =1;i<=t;i++){
	    scanf("%d",&x);
	    if(x%25==0){
	        printf("%d\n",x/25);
	    }
	    else{
	        printf("%d\n",(x/25)+1);
	    }
	}
	return 0;
}

