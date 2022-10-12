// https://www.codechef.com/problems/CABS

#include <iostream>
using namespace std;

int main() 
{
	int i, T, X,Y ;
	cin >> T ;
	for(i = 0; i < T; i++)
	{
        cin>>X>>Y ;
        if (X>Y)
        cout<<"SECOND\n";
        else if (X<Y)
        cout<<"FIRST\n";
        else 
        cout<<"ANY\n";
	}
	return 0;
}
