// https://www.codechef.com/problems/ENSPACE

#include <iostream>
using namespace std;

int main()
{
    int N, X, Y, T, i;
    cin>>T;
    for (i=0;i<T;i++)
    {
        cin>>N>>X>>Y;
        int j = (X*1)+(Y*2);
        if (j>N) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
