// https://www.codechef.com/problems/INTRDSGN

#include <iostream>
using namespace std;

int main() 
{
	int i, T, x1, y1, x2, y2 ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>x1>>y1>>x2>>y2;
        int h=x1+y1;
        int g=x2+y2;
        if (h>g)
        cout<<g<<endl;
        else 
        cout<<h<<endl;
	}
	return 0;
}
