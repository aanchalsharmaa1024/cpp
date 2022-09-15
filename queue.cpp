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



