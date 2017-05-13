#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int first=1;
	long long int second=2;
	long long int sum=2;
	long long int third
	for( ;third<4000000;){
		third=first+second;
		if(third%2==0)
			sum =sum+third;
		first=second;
		second=third;
	}
	printf("%lld\n",sum );
	return 0;
}