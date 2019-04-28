//Given non-zero two integers N and d. 
//The problem is to find the number closest to N & divisible by d.
//If there are more than one such number, 
//then output the one having maximum absolute value.

//----------------------------------------Simple Logic(1st inctinct)-------------------------------------//
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 int N = -15,d =6;  //-18 is ans
 int res1=0,res2=0; 
 for(int i=0;;i++)
 {
  if( (N+i)%d == 0 || (N-i)%d == 0 )
   {
     if( (N+i)%d == 0 ) res1 = N+i;
     if( (N-i)%d == 0 ) res2 = N-i;
     break;
   }
 }
 (abs(res1) > abs(res2))?cout<<res1<<endl:cout<<res2<<endl;
  return 0;
} 

//----------------------------------------Better Solution---O(1)----------------------------------//

#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 int N = -15,M = 6;  
 int n =abs(N), d = abs(M), res;

 int a = n%d;
 int b = d-a;
 if(abs(a)>abs(b))
 {
     res = n+b;
 }
 else if(abs(a)<abs(b))
 {
     res = n-a;
 }
 else if (abs(a)==abs(b))
 {
     abs(n-a)>abs(n+b)?res = n-a: res = n+b;
 }
 (N<0)?cout<<-res<<endl:cout<<res<<endl;
 
  return 0;
} 
