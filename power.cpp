#include <iostream>

using namespace std;

int power(int a,int b){
int ans=1;
for(int i=1; i<=b; i++){
    ans=ans*a;
}
return a;
}

int main(){
    int a,int b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"the answer is"<<answer<<endl;
}
