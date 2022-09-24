#include<iostream>
using namespace std;

int fib(int n){
//base case 
if(n==0)
return 0;

if(n==1)
return 1;

int ans=fib(n-1)+fib(n-2);
return ans;
}
int main(){
int n ;
 cin>>n;
 cout<<fib(n);
 
}









#include <bits/stdc++.h>
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs<0)
        return 0;

    if(nStairs==0)
        return 1;
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}
