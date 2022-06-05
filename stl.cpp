#include <iostream>
#include<array>
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
    
    
    

    return 0;
}

