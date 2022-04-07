//WAP to display multiplication table upto 10
[200~#include<iostream>
using namespace std;
int main(){
		int n;
			cout<<"enter a number:";
				cin>>n;

					for(int i=1; i<=10; ++i){
								cout<<n<<"*"<<i<<"="<<n*i<<endl;
									}
						return 0;
}
//WAP to add only positive nos.
#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout<<"enter a number:";
	cin>>number;

	while(number>=0){
		sum+=number;
		cout<<"enter a number:";
		cin>>number;
	}
	cout<<"\n the sum is"<<sum<<endl;

	return 0;
//WAP to print all odd nos. til n }
