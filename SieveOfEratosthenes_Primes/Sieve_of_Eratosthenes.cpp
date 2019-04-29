// Prime nos till n---Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std; 

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2; p*p <= n; p++)
    {
        if(prime[p]== true)
        {
            for(int i=i*i; i<=n; i=i+p)
                prime[i]=false;
        }
    }
    //Print all primes 
    for(int p=2;p<=n;p++)
    {
        if(prime[p]) cout<<p<<" ";
    }  
}

int main()  
{ 
 int n=50;
 //Prime no.s less than 50.
 SieveOfEratosthenes(9);

 return 0;
} 
