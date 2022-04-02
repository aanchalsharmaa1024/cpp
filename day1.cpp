//find the max of three given nos.
# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0;

}
//WAP to find if the given no. is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    return 0;
}
//WAP to do sum of numbers upto n
# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;
    return 0;

}
//WAP to find the max of three nos.
#include <iostream>
using namespace<std>

    int a,b,c;
    cin>>a>>b>>c;
    int main{
        if(a>b){
            if(a>c){
                cout<<a<<endl;
            }else{
                cout<<c<<endl;
            }

        }

else{
if(b>c){
    cout<<b<<endl;
}
else{
    cout<<c<<endl;
}
}
return 0;


}
//WAP to find if the given no.is odd or even
#include<iostream>
using namespace std
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;

    }
return 0;
}

# include<ostream>
using namespace<std>
int main(){
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}
# include<iostream>
using namespace<std>
int main(){
    int n; 
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}
#include<iostream>
using nmaespace std;
int main(){
    int pocketMoney=3000;
    for(int data=1; data<=30; date++){
        if(data%2==0){
            continue;
        }
        if(pocketMoney=0){
            break;
        }
        cout<<"Go out Toady!"<<endl;
        pocketMoney=pocketMoney-300;
    }
return 0;
}

# include <iostream>
using nmaespace std;
int main(){
    for(i=1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
# include <iostream>
using nmaespace std;
int main(){
    int n;
    cin>>n;
    int i;
    
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non-prime"<<endl;
            break;
        }

    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
    return 0;
}