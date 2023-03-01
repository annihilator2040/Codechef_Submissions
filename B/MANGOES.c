// https://www.codechef.com/problems/MANGOES

#include <stdio.h>

int main(void) {
	int x, y, z, t, i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d",&x,&y,&z);
	    int total = (z-y)/x;
	    printf("%d\n",total);
	}
	return 0;
}

