//https://www.codechef.com/problems/VOLCONTROL

#include <iostream>
using namespace std;

int main() 
{
	int i, T, x, y ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
	    cin>>x>>y;
	    int h = y-x;
	    cout<<abs(h)<<endl;
	    
	}
	return 0;
}
