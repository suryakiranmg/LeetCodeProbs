//Function to convert string to integer : int atoi (const char * str);
#include <bits/stdc++.h>
using namespace std; 

int My_AtoI(string str)
{    
    int res=0;
    for(int i=0; str[i]!= '\0'; i++) 
     {  
        if(str[i] == ' ') 
            continue;
        res = res*10 + str[i]-'0'; 
     }
    return res;
}

int main()  
{ 
    cout<<"ret :"<<My_AtoI("  1234") <<endl;  
    cout<<"ret :"<<My_AtoI("  1  2 34 ") <<endl;      
    return 0;
} 
