// https://www.codechef.com/problems/JERRYCHASE

#include <stdio.h>

int main(void) {
	int i, t, x, y;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&x,&y);
	    if(x>=y){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}

