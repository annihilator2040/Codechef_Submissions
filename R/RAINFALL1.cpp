// https://www.codechef.com/problems/RAINFALL1

#include <iostream>
using namespace std ;

int main()
{
    int x, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x;
        if(x<3)
        {
            cout<<"LIGHT\n";
        }
        else if((x>=3)&&(x<7))
        {
            cout<<"MODERATE\n";
        }
        else 
        {
            cout<<"HEAVY\n";
        }
    }
    return 0 ;
}
