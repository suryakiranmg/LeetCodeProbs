// GCD of Array
#include <bits/stdc++.h>
using namespace std; 

int gcd(int a,int b)
{
    int r;
    while(a!=0)
    {
       r = b%a;
       b=a;
       a=r;
    }
    return b;
}

int main()  
{ 
 int a[] = { 2, 4, 6, 8, 16 }; 
 int n = sizeof(a) / sizeof(a[0]); 
 //---Logic
 int res = a[0]; 
 for (int i = 1; i < n; i++) 
   res = gcd(a[i], res); 
 cout<<"GCD: "<<res<<endl;
 return 0;
} 
