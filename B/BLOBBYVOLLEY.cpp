// https://www.codechef.com/practice/PCPPST01/problems/BLOBBYVOLLEY


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x;
        cin>>x;
        int a=0, b=0;
        
        if(x[0]=='A') 
        {
            a++;
        }
        
        for(int i=0;i<(x.length());i++){
            if(x[i]=='A' && x[i+1]=='A'){
                a++;
            }
            else if(x[i]=='B' && x[i+1]=='B'){
                b++;
            }
        }
        
        cout<<a<<" "<<b<<endl;
        
    }
	return 0;
}
