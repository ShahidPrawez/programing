#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elemnt of aaray \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of all element: ";
    cout<<sum;
}