//Function to convert string to integer : int atoi (const char * str);
#include <bits/stdc++.h>
using namespace std; 

int main()  
{ 
    long long int num; //sizeof(long long int) = 8
    cout<<"Enter binary number:";   
    cin>>num;
    cout<<num<<endl;
    int temp,base=1,dec=0; 
    while(num)
    {
        temp = num%10;
        dec = dec + temp*base;
        num = num/10;
        base = base*2; //BASE
    }
    cout<<"Decimal Value: "<<dec<<endl;
         
    return 0;
} 
