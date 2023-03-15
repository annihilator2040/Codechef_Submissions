// https://www.codechef.com/problems/BETDEAL

#include <stdio.h>

int main(void) {
	int a, b, i, t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&a,&b);
	    int f = 100-a;
	    int s = 200-2*b;
	    if(f<s){
	        printf("FIRST\n");
	    }
	    else if(s<f){
	        printf("SECOND\n");
	    }
	    else {
	        printf("BOTH\n");
	    }
	}
	return 0;
}

