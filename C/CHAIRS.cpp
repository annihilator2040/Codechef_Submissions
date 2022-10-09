// https://www.codechef.com/problems/CHAIRS

#include <iostream>
using namespace std;

int main()
{
    int X, Y, i, T, h;
    cin>>T;
    for (i = 0 ; i < T ; i++)
    {
        cin>>X>>Y;
        if (X>=Y)
        {
            h = X-Y;
            cout<<h<<endl;
        }
        else 
        {
            cout<<0<<endl;
        
        }
    }
    return 0;
}
