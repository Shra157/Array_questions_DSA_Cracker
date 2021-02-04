#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int end,start,temp,i;
    start=0;
    end=4;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}