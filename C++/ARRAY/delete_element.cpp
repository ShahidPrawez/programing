#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,5,6};
    int delet,pos;
    cout<<"Before deleted\n";
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
 }
 cout<<"enter index number you want to delet";
 cin>>delet;


 for(int i=delet;i<5;i++){
    arr[i]=arr[i+1];
 }
 cout<<"\nAfter deteled \n";
 for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
 }
}