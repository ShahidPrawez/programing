#include<iostream>
using namespace std;
int main(){
    int n;
    int loc,m,temp;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element is array : \n";
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
    int search,l,h,mid,f=0;
    l=0;h=n-1;
    cout<<"\nEnter search element : ";
    cin>>search;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==search){
            f=1;
            break;
        }
        if(arr[mid]<search){
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(f==1){
    cout<<"element found"<<endl;
    }
    else{
    cout<<"element not found"<<endl;
    }
    return 0;
}