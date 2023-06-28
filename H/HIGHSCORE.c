//https://www.codechef.com/problems/HIGHSCORE

#include <stdio.h>

int main(void) {
	// your code goes here
	int l,s,a,b,c,d;
	scanf("%d",&l);
	while(l--)
	{
	    scanf("%d",&s);
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a>=b&&a>=c&&a>=d)
	     printf("%d\n",a);
	    else if(b>=c&&b>=d&&b>=a)
	     printf("%d\n",b);
	    else if(c>=a&&c>=b&&c>=d)
	     printf("%d\n",c);
	    else
	     printf("%d\n",d);
	     
	}
	return 0;
}
