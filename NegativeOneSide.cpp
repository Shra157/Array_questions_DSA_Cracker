#include<iostream>
using namespace std;
void NegativeElements(int arr[], int n)
{
    int arr1[20],i,j=0 ,arr2[20],k=0,count=0;
    for(i=0;i<n;i++){
        if (arr[i]<0){
            arr1[j]=arr[i];
            j++;
              

        }
        else{
            count+=1;
            arr2[k]=arr[i];
            k++;
            
        }
        
    }
    
    
    for (i=j,k=0;i<=count+1;i++,k++){
        arr1[i]=arr2[k];
    }

    
    cout<<"Sorted array:";
    for( i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

}
int main()
{
    int n,i;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the no of elements in the array: ";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    NegativeElements(arr,n);
    return 0;
}
