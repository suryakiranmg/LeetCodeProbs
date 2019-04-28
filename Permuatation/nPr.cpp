//Function to find permutation
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
    int n,r; //nPr
    cout<<"Enter n & r:";   
    cin>>n;cin>>r;
    cout<<" n="<<n<<" r="<<r<<endl;
    long long int num=1,den;
    //logic
    for(int i=1;i<=n;i++)
    {
     num = num*i;
     if(i == (n-r)) den= num; //denominator
    }
    if(n==r) den=1;
    cout<<(num/den)<<endl;
    
    return 0;
} 
