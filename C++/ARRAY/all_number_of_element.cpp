#include<iostream>
using namespace std;
int main(){
    int n,all=0;;
    cout<<"Enter size off array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];;
    }
    for(int i=0;i<n; i++){
        all++;
    }
    cout<<"number of element : "<<all<<endl;
    
}