// Add 2 fractions
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 int num1=384, den1=887, num2=778, den2=916;
 //Logic
 long int num = (num1*den2)+(num2*den1);
 long int den = den1*den2;
 int a= num,b=den,r;
 while(a!=0)
 {
 r = b%a;
 b=a;
 a=r;
 }
 num = num/b; den = den/b;
 cout<<num<<"/"<<den<<endl;//Op=520915/406246
 return 0;
} 
