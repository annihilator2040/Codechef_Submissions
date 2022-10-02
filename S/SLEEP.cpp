https://www.codechef.com/problems/SLEEP

#include <iostream>
using namespace std;

int main() {
	int T,X,i;
	cin >> T;
	for(i = 0; i < T; i++)
	{
	    cin >> X;
	    if (X < 7)
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	}
	return 0;
}
