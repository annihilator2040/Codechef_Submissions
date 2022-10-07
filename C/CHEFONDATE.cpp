// https://www.codechef.com/problems/CHEFONDATE

#include <iostream>
using namespace std;

int main() 
{
	int i, T, X, Y;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>X>>Y ;
        if(Y<=X)
        {
            cout<<"YES"<<endl ;
        }
        else 
        {
            cout<<"NO"<<endl ;
        }
	}
	return 0;
}
