// Reverse a string in C/C++
#include <bits/stdc++.h>
using namespace std; 

//(str[i]-'0') converts ASCII char at i to a numeric digit.
//(str[i]+'0') converts numeric digit at i to an ASCII char.

string SumLargeNums(string str1, string str2)
{    
    if(str2.length() > str1.length())  
        swap(str1,str2);  //str1 is longer

    int n1=str1.length();
    int n2=str2.length();
    
    string res = ""; int carry =0,sum;
    for(int i=n1-1,j=n2-1; i>=0; i--,j--)
    {
       if(j>=0) 
           sum = (str1[i]-'0')+(str2[j]-'0')+carry;
       else 
           sum = (str1[i]-'0')+carry;   
       
       res.push_back((sum%10)+'0');  //push LSB to res
       carry = sum/10;    //carry for next step
    }
    if(carry) res.push_back(carry+'0');
    
    //Reverse resultant string
    reverse(res.begin(),res.end());  
    
    return res;
}

int main()  
{ 
    string str1 = "99999999999999999999999999999999999999999999999999999999";
    string str2 = "99999999999999999999999999999999999999999999999999999999999999999999999";
    cout<<SumLargeNums(str1,str2);

    return 0;
} 
