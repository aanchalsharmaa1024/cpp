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

