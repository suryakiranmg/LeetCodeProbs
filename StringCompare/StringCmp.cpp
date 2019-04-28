//String Compare Function
#include <bits/stdc++.h>
using namespace std; 

//Write a modified strcmp function which returns 
//if (s1 < s2)------> -1
//if (s1 = s2)------> 0
//else -------> returns 1
//Ex. your strcmp should consider "GeeksforGeeks" & "geeksforgeeks" as same string.

int StringCmp(string s1, string s2)
{    
    int i;
    for(i=0; (s1[i] && s2[i]); i++) 
     {  
        if((s1[i]==s2[i])|| ((s1[i]^32) == s2[i]))
            continue;
        else
            break;  
     }
    if(s1[i]==s2[i]) 
        return 0;
    if((s1[i] | 32) < (s2[i] | 32)) 
        return -1;
    return 1;
}

int main()  
{ 
    cout<<"ret: "<<StringCmp("Geeks", "apple") <<endl;  
    cout<<"ret: "<<StringCmp("ABCD", "")<<endl;  
    cout<<"ret: "<<StringCmp("ABCD", "z")<<endl;  
    cout<<"ret: "<<StringCmp("ABCD", "abcdEghe")<<endl;  
    cout<<"ret: "<<StringCmp("GeeksForGeeks", "gEEksFORGeEKs")<<endl;  
    cout<<"ret: "<<StringCmp("GeeksForGeeks", "geeksForGeeks")<<endl; 
    return 0;
} 
