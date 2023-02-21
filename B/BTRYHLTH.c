// https://www.codechef.com/problems/BTRYHLTH

#include <stdio.h>

int main(void) {
    int x , i, t;
    scanf("%d",&t);
    for(i=0;i<t; i++){
        scanf("%d",&x);
        if(x>=80){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
	return 0;
}

