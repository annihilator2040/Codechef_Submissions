// https://www.codechef.com/submit/AUCTION

#include <iostream>
using namespace std;

int main()
{
    int A, B, C, T, i;
    cin>>T;
    for(i=0 ; i<T;i++)
    {
        cin>>A>>B>>C;
        if ((A>B)&&(A>C))
        {
            cout<<"Alice"<<endl;
        }
        else if ((B>C)&&(B>C))
        {
            cout<<"Bob"<<endl;
        }
        else 
        {
            cout<<"Charlie"<<endl;
        }
    }
    return 0 ;
}
