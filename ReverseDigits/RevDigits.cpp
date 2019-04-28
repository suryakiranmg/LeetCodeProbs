//Reverse digits of a number
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 long long int num = 123456789876500; 
 long long int res =0;
 while(num)
 {
    res = res*10 + num%10;
    num = num/10;
 }
 cout<<res<<endl;
 return 0;
 
} 
