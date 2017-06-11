#include <bits/stdc++.h>
using namespace std;

int isprm( int n)
{
    long long int i=5, w=2;
    if(n==2 || n== 3)
     return 1;
     if(n%2==0 || n%3==0 || n==1)
        return 0;
     while(i*i<= n)
     {
         if(n%i ==0)
            return 0;
            i +=w;
            w=6-w;
     }
     return 1;
}

int main()
{
    long long int sum=0;

    for(int i=0; i<2000000;i++)
    {
        if(isprm(i)==1)
            sum=sum+i;
    }
    cout<<sum;
    return 0;
}
