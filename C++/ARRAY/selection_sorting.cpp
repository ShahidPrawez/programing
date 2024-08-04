#include<iostream>
using namespace std;
int main(){
    int n;
    int loc,m,temp;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element is array \n";
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        m=arr[i];
        loc=i+1;
        for(int j=i+1;j<n;j++){
            if(m>arr[j]){
                m=arr[j];
                loc=j;
            }
        }
        if(arr[loc]<arr[i]){
            temp=arr[loc];
            arr[loc]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"sorted array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}