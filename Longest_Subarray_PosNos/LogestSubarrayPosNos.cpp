//Longest subarray of nagative integers
#include<bits/stdc++.h>
using namespace std;

void longestSubarry(int *arr, int n,int *res)
{
    int len_temp = 0,start_temp=0,end_temp=0,sum_temp=0; //temp vars
    int len_res = 0, start_res=0, end_res=0,sum_res=0; //result vars
    bool reset_flag=1; //flag to start counting
    for(int i=0; i<n; i++) 
    {
        if(arr[i]>=0)//+ve
        {
            if(reset_flag==1)
            {
                reset_flag=0;
                start_temp = i;len_temp=0;sum_temp=0;
            }
            len_temp++;
            end_temp=i;
            sum_temp += arr[i];
        }
        else //-ve
        {
            reset_flag=1;
            //update results
            if ((len_temp > len_res) || ((len_temp == len_res) && (sum_temp > sum_res) ) )
            {
                len_res =len_temp;
                start_res =start_temp;
                end_res =end_temp;
                sum_res =sum_temp;
            }     
        }
    }
    //update results
    if( len_temp > len_res || (len_temp == len_res && sum_temp > sum_res))
            {
                len_res = len_temp;
                start_res =start_temp;
                end_res =end_temp; 
                sum_res =sum_temp;
            } 
   *res=len_res;
   *(res+1)=start_res;
   *(res+2)=end_res;
   *(res+3)=sum_res;//Pass all result as an array
}
//main
int main()
{
  int arr[] = {1,2,3,-7,2,4,6},res[4]; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  //Function Call
  longestSubarry(arr,n,res); 
  //Print Results
  cout<<"Length of longest sub-array: "<<res[0]<<endl;
  cout<<" Sum:"<<res[3]<<"  Start index:"<<res[1]<<endl;
  return 0; 
}
