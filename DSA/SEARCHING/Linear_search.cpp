#include<iostream>
using namespace std;
int main(){
    int n,search,f=0;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element \n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element you want to search : ";
    cin>>search;
    for(int i=1;i<n;i++){
        if(arr[i]==search){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Element found "<<search<<endl;
    }
    else{
        cout<<"Element not found "<<search<<endl;
    }
    return 0;
}