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

