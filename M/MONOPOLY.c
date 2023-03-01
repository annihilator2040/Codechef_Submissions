// https://www.codechef.com/problems/MONOPOLY

#include <stdio.h>

int main(void) {
	int r1, r2, r3, t, i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d",&r1,&r2,&r3);
	    if(r1+r2<r3 ||  r2+r3<r1 || r1+r3<r2){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

