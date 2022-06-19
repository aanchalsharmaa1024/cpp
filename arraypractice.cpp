
//find the first non-repeating element in an array

// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int,int> umap;
        for(int i=0; i<n; i++)
        umap[arr[i]]++;
        
        for(int i=0; i<n; i++)
        {
            int key=arr[i];
            
            auto temp=umap.find(key);
            int val=temp->second;
            if(val==1)
            return key;
        }
        return -1;
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends
  
//subarrays with equal 1's and 0's
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here

        long long count=0, ans=0;
        unordered_map<long long , long long>mp;
        mp[0]=1;
        for(int i=0; i<n; i++){
            count += (arr[i]==1 ? 1:-1);
            ans += mp[count];
            mp[count]++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends

//finding length of largest subarray with equal no. of 1's and 0's
#include <iostream>
#include<unordered_map>
using namespace std;
int maxlen(int arr[], int n){
    unordered_map<int,int>hM;

    int sum=0;
    int max_len=0;
    int ending_index=-1;

    for(int i=0; i<n; i++)
        arr[i] = (arr[i]==0) ? -1 : 1;
        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum==0){
                max_len=i+1;
                ending_index=i;
            }

            if(hM.find(sum)!=hM.end()){
                if(max_len<i-hM[sum]){
                    max_len=i-hM[sum];
                    ending_index=i;
                }
            }
            else
            hM[sum]=i;
        }
        return max_len;

}

int main(){
    int arr[]={1,0,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxlen(arr,n);

    return 0;
}
