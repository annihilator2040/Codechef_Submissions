// https://www.codechef.com/problems/WATERFLOW

#include <stdio.h>

int main(void) {
	int t, w, x, y, z;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    int a = y*z;
	    int b = a+w;
	    if(x>b){
	        printf("unfilled\n");
	    }
	    else if(x==b){
	        printf("filled\n");
	    }
	    else {
	        printf("overflow\n");
	    }
	}
	return 0;
}

