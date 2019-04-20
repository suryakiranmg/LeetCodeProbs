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
