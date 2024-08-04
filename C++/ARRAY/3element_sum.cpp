#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,8,10,12,14,15,1,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum,ctr=0;
    cout<<"Enter you want to find element of sum : ";
    cin>>sum;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int k=i+2;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==sum){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                ctr++;
                break;
            }
            }
        }
    }
}