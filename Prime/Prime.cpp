//Check if Prime or Not
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
 int n=121; bool prime = true;
 for(int i=2;i <= n/2;i++)
 {
     if(n%i==0) 
     {
        prime = false;
        break;
     }
 }
 prime?cout<<"Yes"<<endl:cout<<"No"<<endl; 
 return 0;
 
} 
