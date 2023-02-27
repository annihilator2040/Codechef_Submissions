// https://www.codechef.com/problems/AIRLINES

#include <stdio.h>

int main(void) {
	int i, t, x, y, z, profit;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&x,&y,&z);
	    int totalcapacity = 10*x;
	    if(totalcapacity>=y)
	    {
	        profit = y*z;
	    }
	    else 
	    {
	        profit = totalcapacity*z;
	    }
	    printf("%d\n",profit);
	}
	return 0;
}

