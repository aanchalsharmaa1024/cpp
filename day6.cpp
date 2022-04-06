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
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int max,min;
    if(n1>n2){
        max=n1;
        min=n2;
    }
    else {
        max=n2;
        min=n1;
    }
    cout<<"Max="<<max<<endl;
    cout<<"Min="<<min<<endl;

    return 0;
}
//WAP to check if a triangle is scalene, isosceles or equilateral
#include<iostream>
using namespace std;
int main(){
    int sidea, sideb,sidec;
    cout<<"input three sides of a triangle:\n";
    cin>>side a>>side b>> side c;

    if(sidea==sideb && sideb==sidec){
        cout<<"this is an equilateral triangle.\n";
    }
    else if(sidea==sideb||sidea==sidec||sideb==sidec){
        cout<<"this is a isosceles triangle.\n";
    }
    else{
        cout<<"this is a scalene triangle.\n";
    }
    return 0;
}
//WAP to check if an alphabet is a vowel or a consonants
