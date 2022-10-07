// https://www.codechef.com/problems/BIRYANI

#include <iostream>
using namespace std;

int main() {
	int i, T, X, Y;
	cin >> T;
	for(i = 0; i < T; i++)
	{
        cin>>X>>Y;
        int h;
        h = X*Y;
        cout<<h<<endl;
	}
	return 0;
}
