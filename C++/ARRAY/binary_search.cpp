#include<iostream>
using namespace std;
int main(){
    int n,search,l,h,mid,f=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element is array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l=0;h=n-1;
    cout<<"Enter search element : ";
    cin>>search;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==search){
            f=1;
            break;
        }
        if(arr[mid]<search){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(f==1){
        cout<<"Element found\n";
    }
    else{
        cout<<"Element not found\n";
    }
    return 0;
}