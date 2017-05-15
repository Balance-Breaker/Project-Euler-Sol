#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=100;
	long long int suml=(n*(n+1))/2;
	long long int sums=(n*(n+1)*(2*n+1))/6;
	long long int ans=suml*suml-sums;
	printf("%lld\n",ans );
	return 0;
}