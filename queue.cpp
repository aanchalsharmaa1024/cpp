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






//Reverse First K elements of Queue
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
     stack<int>s;
    
    for(int i=0; i<k; i++){
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q.push(val);
    }
    int t=q.size()-k;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}



//First non-repeating character in a stream
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char, int> count;
		   
		    queue<char> q;
		    string ans = "";
		    for(int i=0; i<A.length(); i++) {
		        char ch = A[i];
		        
		        
		        count[ch]++;
		         q.push(ch);
		        while(!q.empty()) {
		            if(count[q.front()] > 1){
		                q.pop();
		            }
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends









//Circular tour
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int deficit=0;
       int balance=0;
       int start=0;
       
       for(int i=0; i<n; i++){
           balance+=p[i].petrol-p[i].distance;
           
           if(balance<0){
               deficit+=balance;
               start=i+1;
               balance=0;
           }
       }
       if(deficit+balance>0)
       return start;
       else{
           return -1;
       }  
       }
    };




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends






