// https://www.codechef.com/problems/WAITTIME

#include <iostream>
using namespace std;

int main(){
    int X, K, T, i;
    cin>>T;
    for (i=0; i<T; i++)
    {
        cin>>K>>X;
        if (K==1)
        {
            int g = 7-X;
            cout<<g<<endl; 
        }
        else 
        {
            int h = (K*7);
            int l = h-X;
            cout<<l<<endl;
        }
    
    }
    return 0;
}
