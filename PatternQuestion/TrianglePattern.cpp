#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                count+=1;
                cout<<count<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}