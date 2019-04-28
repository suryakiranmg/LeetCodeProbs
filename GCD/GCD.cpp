//Reverse digits of a number
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 int a=84,b=16;
 int r; // remainder
 while(a!=0) //Euclid's Algo
 {
     r = b%a;
     b=a;
     a=r;
 }
 
 cout<<b<<endl;
 return 0;
 
} 
