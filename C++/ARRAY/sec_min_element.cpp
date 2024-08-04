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
    int min = arr[0],index,sec_min=arr[0];;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    cout<<"min element is: "<<min<<endl;
    arr[index] =123456;
    for(int i=0;i<n;i++){
        if(arr[i]<sec_min){
            sec_min=arr[i];
        }
    }
    cout<<"Second min element : "<<sec_min<<endl;
}