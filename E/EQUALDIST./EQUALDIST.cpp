// https://www.codechef.com/submit/EQUALDIST

#include <iostream>
using namespace std;

int main(){
    int i, T, A, B;
    cin>>T;
    for (i==0; i<T; i++)
    {
        cin>>A>>B;
        int h = A+B;
        if((h%2)==0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
