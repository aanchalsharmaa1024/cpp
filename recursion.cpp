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



//merge sort
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s ,int e){
    int mid=s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second= new int[len2];

    //copy values
    int mainArrayIndex=s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

     mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays
    int index1 =0;
    int index2 =0;
    mainArrayIndex =s;

    while(index1 <len1 && index2 <len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
         arr[mainArrayIndex++] = first[index1++];
       
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    

}
void mergeSort(int arr[], int s, int e){
    //base case
    if(s>=e)
    return;
int mid=s+(e-s)/2;

    //left part sort
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid+1,e);

    //merge both
    merge(arr,s,e);
}

int main(){
    int arr[5]={6,9,4,7,1};
    int n=5;

    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<< arr[i] << endl;
    }
    //cout<<endl;
}











