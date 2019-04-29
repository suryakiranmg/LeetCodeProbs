// Geometric Series a,ar,ar2,ar3.....ar(n-1)..
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 float a=1,b=2; //1st 2 terms of the series
 int n=2; //the required term in the series
 
 //Logic
 float r = b/a;   //common ratio
 float res=1;
 while(--n)
 {
   res = res*r;
 }
 res = res*a;     //a*r^(n-1) 
 cout<<int(res)<<endl;
 
 return 0;
} 
