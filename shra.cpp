/* sort the array 0,1,2*/

#include<iostream>
using namespace std;

void sorting(int arr[],int n){
    int i,zero=0,one=0,two=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            zero+=1;
        }
        else if(arr[i]==1){
            one+=1;
        }
        else{
            two+=1;
        }
    }
    for(i=0;i<zero;i++){
        arr[i]=0;
    }
    for(i=zero;i<zero+one;i++){
        arr[i]=1;
    }
    for(i=one;i<zero+one+two;i++){
        arr[i]=2;
    }
    cout<<"Sorted array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter only 0,1,2:";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    sorting(arr,n);
    return 0;
    


}