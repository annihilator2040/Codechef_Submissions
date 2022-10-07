// https://www.codechef.com/problems/BURGERS

#include <iostream>
using namespace std;

int main() {
	int i, T, A, B;
	cin >> T;
	for(i = 0; i < T; i++)
	{
	    cin>>A>>B;
	    if(A>=B)
	    {
	        cout<<B<<endl;
	    }
	    else if (A<=B)
	    {
	        cout<<A<<endl;
	    }
    
	}
	return 0;
}
