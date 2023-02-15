// https://www.codechef.com/LP0TO101/problems/FLOW010

#include <iostream>
using namespace std;

int main() 
{
    int t, i;
    char h;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>h;
        if (h=='b'||h=='B')
        cout<<"BattleShip\n";
        else if (h=='c'||h=='C')
        cout<<"Cruiser\n";
        else if (h=='D'||h=='d')
        cout<<"Destroyer\n";
        else 
        cout<<"Frigate\n";
    }
	return 0;
}
