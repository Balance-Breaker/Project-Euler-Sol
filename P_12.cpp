#include<bits/stdc++.h>

using namespace std;

int main()
{
        int numofdivs = 0;
        int n = 1;
        int trinum;
        while(numofdivs <= 500)
        {
                n++;
                numofdivs = 0;
                trinum = n*(n+1)/2;
                for(int i = 1; i <= sqrt(trinum); i++)
                        if((trinum%i) == 0)
                                numofdivs++;
                numofdivs *= 2;
                if(floor(sqrt(trinum)) == sqrt(trinum))
                        numofdivs--;
        }
        cout <<  trinum << endl;
        return 0;
}
