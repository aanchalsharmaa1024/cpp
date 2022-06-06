//deque

#include <iostream>




#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    
    d.push_back(1);
    d.push_front(2);
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    // d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    
    //  d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    
    cout<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+2);
    
    cout<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<endl;
    }
    

    return 0;
}


















#include <iostream>
#include<queue>

using namespace std;

int main(){
queue<string>q;
q.push("aanchal");
q.push("sharma");
q.push("love");

cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
cout<<q.size();



    return 0;
}




#include <iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int>maxi;
    
    //min heap
    priority_queue<int, vector<int>,greater<int>> mini;
    
    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(8);
    
    cout<<maxi.size()<<endl;
    int n= maxi.size();
    for (int i=0; i<n; i++)  {
        cout<<maxi.top()<<" ";
        maxi.pop();
        
    }cout<<endl;
    
     mini.push(1);
    mini.push(2);
    mini.push(4);
    mini.push(8);
     
    cout<<mini.size()<<endl;
    int m= mini.size();
    for (int i=0; i<m; i++)  {
        cout<<mini.top()<<" ";
        mini.pop();
        
    }cout<<endl;
    
    
    

    return 0;
}

