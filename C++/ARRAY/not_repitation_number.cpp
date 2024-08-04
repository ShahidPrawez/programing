#include<iostream>
using namespace std;
int main(){
    int arr[]={1,6,3,5,5,8,7,4,8,7,2,36,9,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]!=arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}