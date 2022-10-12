// https://www.codechef.com/problems/TFPAPER

#include <iostream>
using namespace std;

int main() 
{
	int i, T, n, k;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
	    cin>>n>>k;
	    int h = n-k;
	    cout<<h<<endl;
	}
	return 0;
}
