// maxinum and mininum of an array.
#include<iostream>
#include<climits>
using namespace std;
void MaxMin(int arr[],int n){
    int maxNo,minNo,i;
    maxNo=INT_MIN;
    minNo=INT_MAX;
    for(i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<" "<<minNo;
}

int main()
{
    int n,i;
    cout<<"Enter the no:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    MaxMin(arr,n);
}