#include <bits/stdc++.h>

int main() {
        int a, b, c;
        for(a = 1; a < 1000; a++)
                for(b = a+1; b < 1000; b++)
                        {   c=1000-a-b;
                            if(a*a+b*b == c*c)
                                printf("%d\n\n", a*b*c);
                        }
        return 0;
}
