#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main(){
	long long int ans=1;
	for(int i=1;i<=20;i++){
		ans=ans*(i/gcd(ans,i));
	}
	printf("%d\n",ans );
	return 0;
}