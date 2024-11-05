#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    
    cout<<"enter elemnet of array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large = arr[0],index,sec_large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
            index =i;
        }
    
    }
    cout<<"first large  element is: "<<large<<endl;
    arr[index]=-1223453;
    for(int i=0;i<n;i++){
        if(arr[i]>sec_large){
            sec_large=arr[i];
        }
    }
    cout<<"second large  element is:"<<sec_large<<endl;
}