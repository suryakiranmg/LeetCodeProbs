////------BRUTE FORCE-------//Time = O(n^2), Space = O(1)
#include <bits/stdc++.h>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0; i<nums.size();i++)
        {
           for(int j=i+1;j<nums.size();j++)
           {
               if(nums[i]+nums[j]==target)
               { 
                   vector<int> ans{i+1,j+1};
                   return ans;            
                }         
      }}}
    
int main() 
{ 
   vector<int>vect{2, 7, 11, 15},ans;
   int target = 9;
   //Function Call
   ans = twoSum(vect,target); 
   cout<<"("<<ans[0]<<" "<<ans[1]<<")";
} 

////-----Using Hash Table-------//Time = O(n), Space = O(n)
#include <bits/stdc++.h>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) 
    {
    map<int,int>mymap;
    int i=0;
    for(auto itr=nums.begin(); itr != nums.end(); itr++)
      mymap.insert(pair<int,int>(*itr,i++));
    
    for(auto itr=mymap.begin();itr != mymap.end();++itr)
    {
      auto index = mymap.find(target - (itr->first));
      if(itr != index) 
      {
          vector<int> ans{(itr->second)+1,(index->second)+1};
          return ans;
      }
    }  
    }
    
int main() 
{ 
   vector<int>vect{2, 5, 11, 8, 7},ans;
   int target = 9;
   //Function Call
   ans = twoSum(vect,target); 
   cout<<"("<<ans[0]<<" "<<ans[1]<<")";
} 
