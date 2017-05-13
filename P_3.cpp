#include<bits/stdc++.h>
using namespace std;
long long int smallfact(long long int n){
	long long int i=5,w=2;
	if(n==1)
		return 1;
	if(n%2==0)
		return 2;
	if(n%3==0)
		return 3;
	while(i*i<n){
		if(n%i==0)
			return i;
		i=i+w;
		w=6-w;
	}
	return n;

}
int main(){
	long long int num=600851475143;
	long long int maxfact=1;
	long long int i=3;
	long long int p=1;
	 while(p<num)
     {
     	p=smallfact(num);
     	if(p<num)
     		num=num/p;
     	else
     		maxfact=num;
}
	printf("%lld\n",maxfact );
	return 0;
}

