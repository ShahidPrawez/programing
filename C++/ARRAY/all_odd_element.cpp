#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter array element \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"odd number in this array : ";
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
            cout<<a[i]<<" ";
            // count++;
            // break;
        }
        // cout<<"number of even : "<<count;
    }
    cout<<"\nnumber of odd : "<<count;
}