//Find GCD & LCM of 2 nums
#include <bits/stdc++.h>
using namespace std; 
 //----METHOD
 //--- a x b = LCM(a,b) * GCD (a,b)
 //--- LCM(a,b) = (a * b) / GCD(a,b) 
int main()  
{ 
 int a=15,b=20;
 //---GCD
 int r, val = a*b;
 while(a!=0)
 {
     r=b%a;
     b=a;
     a=r;
 }
 int GCD = b;
 int LCD = val/ GCD;
 cout<<"GCD: "<<GCD<<" LCM: "<<LCD<<endl;
 return 0;
 
} 
