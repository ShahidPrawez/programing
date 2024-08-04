#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elemnt of aaray \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"product of all element: ";
    cout<<product;
}