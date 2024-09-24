#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n )
{
    if(n == 1)
    {
        return false;
    }
    for(int i =2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isPrimeOptimised(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i =2;i<=(floor(sqrt(n)));i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    return 0;
}

//For a divisor pair(a,b) one of them lies below sqrt(N) and other lies 
// above sqrt(N)