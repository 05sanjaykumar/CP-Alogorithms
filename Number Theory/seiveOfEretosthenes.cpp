#include <bits/stc++.h>
using namespace std;
int isPrime[1000001];
void sieve()
{
    int maxN = 1000000;
    for(int i =1;i<maxN;i++)
    {
        isPrime[i] =1;
    }
    isPrime[0] = isPrime[1] =0;
    for(int i =2;i<=(floor(sqrt(n)));i++)
    {
        if(isPrime[i])
        {
            for(int j = i*i;j<=maxN;j+=i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 

    return 0;
}
