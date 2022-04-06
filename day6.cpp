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

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    if(x==y){
        cout<<"Both the numbers are equal";
    }
    else{
        if(x>y){
            cout<<"x is greater than y";
        }
        else{
            cout<<"y is greater than y";
        }
    }
    return 0;
}
// WAP to check if a no. is even or odd

#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}

//WAP to find maximum ,minimum among two nos.

