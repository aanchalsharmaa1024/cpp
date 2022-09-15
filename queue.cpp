//reversal of queue


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> Q)
{
    // add code here.
    stack<int>s;
    while(!Q.empty()){
    int element=Q.front();
    Q.pop();
    s.push(element);
    }
    
    while(!s.empty()){
        int element=s.top();
        s.pop();
        Q.push(element);
    }
    return Q;
}






//First negative integer in every window of size k
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int>dq;
    vector<long long >ans;
    //process first window
    for(int i=0; i<K; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    //store ans of first win
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    //remaining win
    for(int i=K ; i<N; i++){
        //removal
        if(!dq.empty()&& (i-dq.front())>=K){
            dq.pop_front();
        }
        //addition
        if(A[i]<0){
            dq.push_back(i);
        }
    
                            //ans store
                         if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }   
    }
           return ans;                          
 }


