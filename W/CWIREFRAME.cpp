// https://www.codechef.com/problems/CWIREFRAME

#include <iostream>
using namespace std;

int main() 
{
	int i, T, X, N, M;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>N>>M>>X;
        int p = 2*(N+M);
        cout<<p*X<<endl;     
	}
	return 0;
}
