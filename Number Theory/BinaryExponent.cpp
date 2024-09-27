#include<bits/stdc++.h>
using namespace std;
int power(int base,int n)
{
    int res = 1;
    for(int i=1;i<=n;i++)
    {
        res*=base;
    }
    return res;
}
int optimisedPower(int base, int n)
{
    int res = 1;
    while(n!=0)
    {
        if(n%2 == 1)
        {
            res*=base;
            n--;
        }
        else
        {
            base*=base;
            n/=2;
        }
    }

    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<< power(2,13)<<endl;
    cout<< optimisedPower(2,13)<<endl;
    return 0;
}

