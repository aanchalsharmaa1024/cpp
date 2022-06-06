
#include <iostream>
#include<array>
=======
//deque                                                                                     








#include <iostream>




#include<deque>

using namespace std;

int main()
{
    
array<int,4> a={1,2,3,4};
int size = a.size();
cout<<a.size()<<endl<<endl;

for(int i=0; i<size; i++){
    cout<<a[i]<<endl<<endl;
}

cout<<a.at(3)<<endl<<endl;
cout<<a.empty()<<endl<<endl;

cout<<a.front()<<endl;
cout<<a.back()<<endl;
    return 0;
}
 








//vectors
#include <iostream>
#include<vector>


using namespace std;

int main()
{
    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> last(a);
    
    




































    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int>v;
    cout<<"capacity ->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity ->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    
    cout<<"element at 2nd index "<<v.at(1)<<endl;
    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        
    cout<<i<<" ";
    }cout<<endl;
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    
    
=======
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
    
   .erase(d.begin(),d.begin()+2);
    
    cout<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<endl;
    }
    

    return 0;
}


















<<<<<<< HEAD


#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> n(5,100);
    for(int i:n){
        cout<< i<<" ";
    }cout<<endl;

    list<int>l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<< i <<" ";
    }cout<<endl;

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}















#include <iostream>
#include<stack>
=======
#include <iostream>
#include<queue>
>>>>>>> dev

using namespace std;

int main(){
<<<<<<< HEAD
stack<string>s;
s.push("aanchal");
s.push("sharma");
s.push("love");

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;

cout<<s.size()<<endl;
cout<<s.empty()<<endl;
=======
queue<string>q;
q.push("aanchal");
q.push("sharma");
q.push("love");

cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
cout<<q.size();

>>>>>>> dev


    return 0;
}

<<<<<<< HEAD
=======




>>>>>>> dev
