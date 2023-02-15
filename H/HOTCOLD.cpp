// https://www.codechef.com/problems/HOTCOLD

#include <iostream>
using namespace std;

int main() 
{
	int i, T, c ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
	    cin>>c;
	    if (c>20)
	    cout<<"HOT\n";
	    else 
	    cout<<"COLD\n";
	    
	    
	}
	return 0;
}
