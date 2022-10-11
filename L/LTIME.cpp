// https://www.codechef.com/submit/LTIME

#include <iostream>
using namespace std ;

int main()
{
    int x, t, i ;
    cin>>t;
    for (i=0; i<t; i++)
    {
        cin>>x;
        if ((1>=x)||(x<=4))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}
