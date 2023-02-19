// https://www.codechef.com/problems/SPECIALITY

#include <iostream>
using namespace std ;

int main()
{
    int t, i, x, y, z;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        if((x>y)&&(x>z))
        cout<<"SETTER\n";
        else if (y>z)
        cout<<"TESTER\n";
        else 
        cout<<"EDITORIALIST\n";
    }
    return 0 ;
}
