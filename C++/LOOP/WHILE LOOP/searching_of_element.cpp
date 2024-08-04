#include<iostream>
using namespace std;
int main(){
    int n,search,f=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter element in array \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter search element : ";
    cin>>search;
    for(int i=0;i<n;i++){
    if(a[i]==search)
    {
        f=1;
        break;
    }
    }
    if(f==1){
        cout<<search<<"-> found "<<endl;
    }
    else{
        cout<<search<<" -> not found "<<endl;
    }

}