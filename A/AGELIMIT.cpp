// https://www.codechef.com/problems/AGELIMIT

#include <iostream>
using namespace std;

int main() {
	int i, T, X, Y, A;
	cin >> T;
	for(i = 0; i < T; i++)
	{
	    cin>>X>>Y>>A;
	    if ((A>=X)&&(Y>A))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
