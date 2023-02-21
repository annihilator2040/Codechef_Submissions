// https://www.codechef.com/problems/BUDGET_

#include <stdio.h>

int main(void) {
	int x, y, i, t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&x,&y);
	    if(x>=y*30){
	        printf("YES\n");
	    }
	    else 
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

