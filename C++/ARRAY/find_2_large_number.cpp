// program not coplite
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
    int first = arr[0],second=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<=first )
        {
            second=arr[i];
        }
    }
    cout<<"first large: "<<first<<endl;
    cout<<"second large: "<<second<<endl;
}