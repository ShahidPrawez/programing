#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int count=0;
        int odd=arr[0];
        for(int j=0;j<size-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    
}