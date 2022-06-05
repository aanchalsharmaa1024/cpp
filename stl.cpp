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

