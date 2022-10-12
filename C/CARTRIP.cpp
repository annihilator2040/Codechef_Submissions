// https://www.codechef.com/problems/CARTRIP

#include <iostream>
using namespace std;

int main() 
{
	int h, i, T, X ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>X ;
        if (X>=300)
        {
            h = X*10;
            cout<<h<<endl;
        }
        else 
        {
            cout<<3000<<endl;
        }    
        
	}
	return 0;
}
