// https://www.codechef.com/problems/CHESSTIME

#include <iostream>
using namespace std;

int main()
{
    int N, T, i, h;
    cin>>T;
    for (i=0 ; i<T; i++)
    {
        cin>>N;
        h = ((N*60)/20);
        cout<<h<<endl;
    }
    return 0;
}
