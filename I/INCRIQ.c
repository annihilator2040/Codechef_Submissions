// https://www.codechef.com/problems/INCRIQ

#include <stdio.h>
int main(void) {
	int x, iq;
	scanf("%d",&x);
	iq = x + 7;
	if(iq>170){
	    printf("YES\n");
	}
	else{
        printf("NO\n");	    
	}
	
	return 0;
}

