# include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    if(x==y){
        cout<<"Both x and y are equal";
    }
    else if(x>y){
        cout<<"x is greater than y";
    }
    else{
        cout<<"y is greater than x";
    }
    return 0;
}
