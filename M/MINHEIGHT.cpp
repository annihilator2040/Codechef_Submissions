//https://www.codechef.com/problems/MINHEIGHT

#include <iostream>
using namespace std;

int main() 
{
	int i, T, X, H ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>X>>H ;
        if(X>=H)
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
