//check if a no. is prime or not
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
//print all prime nos. between a and b
# include <iostream>
using namespace std
int main(){
    int a,b;
    cin>>a>>b;
    for(num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
            if(i==num){
                cout<<num<<endl;
            }
        
    }
    return 0;

}
