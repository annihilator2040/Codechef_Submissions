// https://www.codechef.com/problems/MY1STCONTEST

#include <iostream>
using namespace std;

int main() {
	int N, A, B, Nr, Hr;    // Nr- No Rating
	cin>>N>>A>>B;           // Hr - High Rating
	Nr = N-A;
	Hr = Nr-B;
	cout<<Nr<<" "<<Hr;

	return 0;
}
