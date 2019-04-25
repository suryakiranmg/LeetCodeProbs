//Set a bit at n-th pos in a number
#include<bits/stdc++.h>
using namespace std;

//-----------BIT MAGIC---------------------//
int main()
{
    //To set a bit at n-th position
    int num=4, pos =1;
    num = num | (1<<pos); //OR with 1 sets the bit
    cout<<num<<endl;
    
    //To clear a bit at n-th position
    num=7; pos =1;
    num = num & (~(1<<pos)); //AND with 0 clears the bit
    cout<<num<<endl;
    
    //To toggle a bit at n-th position
    num=4; pos =1;
    num = num ^ (1<<pos); //XOR with 1 toggles the bit
    cout<<num<<endl;
    
    //To check if a bit at n-th position is set or not
    num=5; pos =2;
    bool bit = num & (1<<pos); //Check bit set/unset
    bit?cout<<"Set"<<endl:cout<<"Unset"<<endl;
    
    //Invert Every bit of a number = 1's complement
    num =4;
    cout<<(~num)<<endl;
    
    //2's complement = 1's complement+1
    num =4;
    cout<<(~num+1)<<endl;
    
    //Strip lowest set bit
    num =7;
    num = num & (num-1);
    cout<<num<<endl;
    
    //Lowest Set bit of a num => AND num with its 2's complement
    num = 16;
    num = num & (-num);
    (num==1)?cout<<num:cout<<(log2(num))+1;
    
  return 0; 
}
