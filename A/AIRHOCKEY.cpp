// https://www.codechef.com/problems/AIRHOCKEY

#include <iostream>
using namespace std ;

int main()
{
    int a, b, i, h, t;
    cin>>t;
    for (i = 0; i<t; i++)
    {
        cin>>a>>b;
        if (a>=b)
        {
            h= 7-a; 
        }
        else 
        {
            h = 7-b;
        }
        cout<<h<<endl;
    }
    return 0 ;
}
