// https://www.codechef.com/problems/FINE

#include <iostream>
using namespace std ;

int main()
{
    int t, i, x;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x;
        if(x<=70)
        cout<<"0\n";
        else if(x>70 && x<=100)
        cout<<"500\n";
        else
        cout<<"2000\n";
    }
    return 0 ;
}
