//To check if a number is a power of 2
#include<bits/stdc++.h>
using namespace std;

class CheckPowerof2
{
public:
//APPROACH 1 : Take log2
bool IsPowerofTwo(int n)
{
    if(n==0 | n==1) return false;
    return(ceil(log2(n))) == (floor(log2(n)));
}
//APPROACH 2 : Divide by 2 till 1 or 0
bool isPowerofTwo(int n)
{
    if(n==0|n==1) return false;
    while(n>=2)
    {
        if(n%2 == 1) return false;  
        n=n/2;
    }
    return true;
}
//APPROACH 3 : Count no. of set bits
bool Is_PowerofTwo(int n)
{
    if(n==0|n==1) return false;
    int count = 0;
    while(n!=0)
    {
        count = count + n&1;
        n=n>>1;
    }
    return (count==1)? true:false;
}
//APPROACH 4 : Count # set bits using Brian Kernighan’s Algorithm
bool is_PowerofTwo(int n)
{
    if(n==0|n==1) return false;
    int count = 0;
    while(n) //n!=0
    {
        n = n&(n-1);
        count++; //loops as many times as set bits
    }
    return (count==1)? true:false;
}
//APPROACH 5: Check if its just one bit that's set by Brian Kernighan's algo.
bool is__PowerOfTwo (int n) 
{ 
 if(n==0|n==1) return false;
 return (!(n&(n-1))); 
} 
};

//main
int main()
{
   CheckPowerof2 suki;
    //APPROACH 1 : Take log2
   suki.IsPowerofTwo(123)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   suki.IsPowerofTwo(64)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   //APPROACH 2 : Divide by 2 till 1 or 0
   suki.isPowerofTwo(123)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   suki.isPowerofTwo(64)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   //APPROACH 3 : Count no. of set bits
   suki.Is_PowerofTwo(123)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   suki.Is_PowerofTwo(64)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   //APPROACH 4: Count no. of set bits using Brian Kernighan's algorithm
   suki.is_PowerofTwo(123)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   suki.is_PowerofTwo(64)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   //APPROACH 5: Check if its just one bit that's set by Brian Kernighan's algo.
   suki.is__PowerOfTwo(123)? cout<<"Yes"<<endl : cout<<"No"<<endl;
   suki.is__PowerOfTwo(64)? cout<<"Yes"<<endl : cout<<"No"<<endl;

}
