#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxcount=0;
    int index=-1;

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size-1;j++){
            if(arr[i]==arr[j]){
                count++; 
            }
            if(count > maxcount){
                maxcount=count;
                index=i;
            }
        }
        cout<<"mejority number: ";
        if(maxcount>size/2){
            cout<<arr[index]<<endl;
            break;
        }
        else{
            cout<<"No mejority number"<<endl;
            break;
        }
    }
}