// https://www.codechef.com/problems/TCKTFINE

#include <iostream>
using namespace std;

int main() 
{
	int i, T, X, P, Q ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
	    cin>>X>>P>>Q;
	    int h = P-Q;
	    cout <<X*h<<endl;
	}
	return 0;
}
