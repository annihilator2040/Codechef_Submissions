// https://www.codechef.com/submit/PRIZEPOOL

#include <iostream>
using namespace std; 

int main()
{
    int i, X, Y, T;
    cin>>T;
    for(i = 0; i < T; i++)
    {
        cin>>X>>Y;
        int h, j, sum;
        h = 10 * X;
        j = 90 * Y;
        sum = h + j;
        cout<<sum<<endl;
    }
    return 0;
}
