// https://www.codechef.com/problems/BATTERYLOW

#include <stdio.h>

int main(void) {
	int i, t, x;
	scanf("%d",&t);
	i= 0;
	while(i<t){
	    scanf("%d",&x);
	    if(x<=15){
	        printf("Yes\n");
	    }
	    else {
	        printf("No\n");
	    }
	    i++;
	}
	return 0;
}

