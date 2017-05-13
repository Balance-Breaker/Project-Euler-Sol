#include<bits/stdc++.h>
using namespace std;
int rev(int n){
	int reversed=0;
	while(n>0)
	{
		reversed=10*reversed+n%10;
		n=n/10;
	}
	return reversed;
}

bool isPalin(int n){
	return n==rev(n);
}
int main(){
	int largpalin=0;
	for (int i = 999; i >=100; i--)
	{
		for (int j = 999; j >=i; j--)
		{
			if(i*j<=largpalin)
				break;
			if(isPalin(i*j))
				largpalin=i*j;
		}
	}
	printf("%d\n",largpalin );
	return 0;
}