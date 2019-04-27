// Reverse a string in C/C++
#include <bits/stdc++.h>
using namespace std; 

void ReverseString(string & str)
{
   int n = str.length(); 
   for(int i=0; i<(n/2); i++)
      swap(str[i],str[n-i-1]);
}

char* ReverseConstString(char const * str)
{
    int n = strlen(str);
    char *res = new char[n+1];//new dynamic char array
    strcpy(res,str);
    for(int i=0, j= n-1; i<j; i++,j--)
        swap(res[i],res[j]);
    return res;
}

string RevConstStr(const string & str)
{
    string res = str;
    int n = res.length();
    for(int i=0; i<(n/2); i++)
        swap(res[i],res[n-i-1]);
    return res;
}

int main()  
{ 
    string str = "suryakiran_mg";
    //Method 1: Swap chars 
    ReverseString(str);
    cout<<str<<endl;
    
    //Method 2: Use inbuilt reverse fun in #include <algorithm>
    str ="Suryakiran M George";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    
    //Method 3: Only printing reverse
    str = "Suki_is_Surya";
    for(int i=str.length()-1; i>=0; i--)
        cout<<str[i];
    
    //Method 4: Getting reverse of a constant string
    const char *s = "Good Eve";
    printf("\n%s\n", ReverseConstString(s));
    
    //ANother way of writing above case
    const string st = "OneLove";
    cout<<RevConstStr(st)<<endl;
    
    return 0;
} 
