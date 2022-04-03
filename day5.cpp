//switch-case statement
# include <iostream>
using namespace std
int main(){
    char button;
    cout<<"input a character:";
    cin>>button;
    switch(button){
        case'a':
        cout<<"hello"<<endl;
        break;
        case'b':
        cout<<"namaste"<<endl;
        break;
        case'c':
        cout<<"salute"<<endl;
        break;
        case'd':
        cout<<"hola"<<endl;
        break;
        case'e':
        cout<<"ciao"<<endl;
        break;
        default:
        cout<<"I am still learning more"<<endl;
        break;

    }
    return 0;
}
//simple calculator
# include <iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"input 2 nos.:";
    cin>>n1>n2;

    char op;
    cout<<"input 2 operators";
    cin>>op;

    switch(op)
    {
        case:'+'
        cout<<n1+n2<<endl;
        break;
         case:'-'
        cout<<n1-n2<<endl;
        break;
         case:'/'
        cout<<n1/n2<<endl;
        break;
         case:'*'
        cout<<n1*n2<<endl;
        break;
        default:
        cout<<"enter another operator"<<endl;

    }
    return 0;
}
# include <iostream>
using namespace std;
int main(){
    int i=1;
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;

}
# include <iostream>
using nmaespace std;
int main(){
    int i=1;
    int j=2;
    int k;
    k = i + j + i++ + j++  + ++i + ++j;
    cout<<i<<" "<<j<<" "<<" "<<k<<endl;
    return 0 ;
}
# include <iostream>
using nmaespace std;
int main(){
int i=0;
i=i++ - --i + ++i - i--;
cout<<i<<endl;


    return 0;
}
# include <iostream>
using namespace std;
int main(){
    int i=1; j=2; k=3;
    int m=i-- - j-- - k--;
    cout<<i<<endl;
    cout<<j<<endel;
    cout<<k<<endl;
    cout<<m<<endl;
    return 0;


}
# include <iostream>
using namespace std;
int main(){
    int i =10; j=20; k;
    k=i-- - i++ + --j - ++j --i -j-- + ++i -j++;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    return 0;
    }
//WAP t0 print that input no. is equal to , less than or more than 10
# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n>10){
        cout<<"more than 10"<<endl;

    }
    else if(n<10){
        cout<<"less than 10"<<endl;
    }
    else {
        cout<<"equal to 10"<<endl;
    }
    return 0;
}
//WAP  to check the no. is divisible by both 2 and 3 or divisible by only one if them
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"Divisible by only 2"<<endl;
    }
    else if(n%3==0){
        cout<<"Divisible by only 3"<<endl;
    }
    else{
        cout<<"divisible by none"<<endl;
    }
}
