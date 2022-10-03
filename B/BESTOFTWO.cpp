//https://www.codechef.com/problems/BESTOFTWO

#include <iostream>
using namespace std;

int main() {
	int i, T, X, Y;
	cin >> T;
	for(i = 0; i < T; i++)
	{
        cin>>X>>Y ;
        if(X>Y)
        {
            cout<<X<<endl ;
        }
        else 
        {
            cout<<Y<<endl ;
        }
	}
	return 0;
}
