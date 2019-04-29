// Given two numbers A and B, find Kth digit from right of A^B
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
int a=3,b=3;
int k=1; 
long int res=1;
while(b)
 {
  res = res*a;
  b--;
 }	    
//---to get k-th digit
res = res/pow(10,k-1);
res = res%10;
cout<<res<<endl;  
 return 0;
} 
