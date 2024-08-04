#include<iostream>
using namespace std;
int main(){
    int a[100],size,pos,item;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter array of elements : "<<endl;
    for(int i = 0; i< size; i++){
        cin>>a[i];
    }
    cout<<"Enter position that you want to insert : ";
    cin>>pos;
    cout<<"Enter item that you want to insrt : ";
    cin>>item;
    for(int i =size; i >= pos;i--){
        a[i]= a[i-1];
    }
    a[pos]=item;
    size++;
    cout<<"resultant array elements : ";
    for(int i =0 ; i<size;i++){
        cout<<" "<<a[i] ;
    }
    cout<<endl;

}