#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array\n";
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array\n";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}