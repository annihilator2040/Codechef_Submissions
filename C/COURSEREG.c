// https://www.codechef.com/problems/COURSEREG

#include <stdio.h>

int main(void) {
	int n, k, m, i, t, left;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d",&n,&m,&k);
	    left = m-k;
    	if(left>=n){
    	    printf("YES\n");
    	}
    	else{
    	    printf("NO\n");
    	}
	}
	return 0;
}

