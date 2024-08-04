#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,5,4,4,5,8,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
                
            }
        }
    }
}