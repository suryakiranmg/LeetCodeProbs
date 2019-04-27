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


//-------------------------------------------BIT MAGIC AGAIN----------------------//
#include<bits/stdc++.h>
using namespace std;

//-----------BIT MAGIC---------------------//
int main()
{
    //Clear  bits from LSB to i-th bit
    int num = 13, i=2, mask;
    //left << 1 i times; minus 1 from it, all bits from 0 to i-1 become 1
    mask = ~((1<<i+1)-1);
    cout<<(num & mask)<<endl;
    //Clear  bits from MSB to i-th bit
    num = 215, i=4;
    mask = ((1<<i+1)-1);
    cout<<(num & mask)<<endl;
    //Divide by 2 = shift right once
    num = 144;
    cout<<(num>>1)<<endl;
    //Multiply by 2 = shift left once
    num = 144;
    cout<<(num<<1)<<endl;
    
    //Upper to Lowercase: A=0100 0001,a=0110 0001 = set 5th bit
    char ch = 'A';
    mask = 1<<5; cout<<"mask "<<char(mask)<<endl; // mask = space char
    ch = ch|mask; cout<<ch<<endl;
    //----Another way = OR with mask(space character)
    ch = 'B'; ch = ch | ' '; cout<<ch<<endl;
    
    //Lower to Uppercase: B=0100 0010,b=0110 0010 = unset 5th bit
    ch = 'a';
    mask = ~(1<<5); cout<<"mask "<<char(mask)<<endl;
    ch = ch&mask; cout<<ch<<endl;
    //----Another way = AND with mask(underscore character)
    ch = 'b'; ch = ch & '_'; cout<<ch<<endl;
    
    //Count Set Bits in Integer
    int count = 0; num = 123456;
    while(num)
     {
       num = num & (num-1); //--Brian Kernighan's Algo
       count++;
     }
    cout<<"Set bits: "<<count<<endl;
    
    //log base 2 of a number
    count =0; num = 128; // num cant be 0 or 1
    while(num = num>>1) //divn by 2
    {
      count++;
    }
    cout<<"Log2 = "<<count<<endl;
    
    //Check if power of 2(if so only 1 bit will be set)
    num = 124; // num cant be 0 or 1
    if((num && !(num & num-1))==1) cout<<"Yes, power of 2"<<endl;
    else cout<<"No, not power of 2"<<endl;
 
  return 0; 
}

